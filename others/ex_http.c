#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <errno.h>
#include <unistd.h>
#include <netdb.h> // getnameinfo()

// usual socket headers
#include <sys/types.h>
#include <sys/socket.h>
#include <netinet/in.h>

#include <arpa/inet.h>

#define SIZE 1024
#define BACKLOG 10 // passed to listen

void report(struct sockaddr_in *serverAddress);

void setHttpHeader(char httpHeader[]) {

	// File object to return
	FILE *htmlData = fopen("main.html", "r");

	char line[100];
	char responseData[8000];
	while (fgets(line, 100, htmlData) != 0) {
		strcat(responseData, line);
	}

	// char httpHeader[8000] = "HTTP/1.1 200 OK\r\n\n";
	strcat(httpHeader, responseData);
}

int main(int argc, char *argv[])
{
	char httpHeader[8000] = "HTTP/1.1 200 OK\r\n\n";

	// Socket setup: creates an endpoint for communication, returns a descriptor.

	int serverSocket = socket (
		AF_INET,     // Domain: specifies protocol family
		SOCK_STREAM, // Type: specifies communication semantics
		0            // Protocol: 0 because there is a single protocol
		);

	// Construct local address structure
	struct sockaddr_in serverAddress;
	serverAddress.sin_family = AF_INET;
	serverAddress.sin_addr.s_addr = htonl(INADDR_LOOPBACK); //inet_addr("127.0.0.1");

	// Bind socket to local address
	// bind() assigns the address specified by serverAddress to the socket
	// refered to by the file descriptor serverSocket

	bind(
		serverSocket,       // file descriptor referring to a socket
		(struct sockaddr *) &serverAddress, // Address to be assigned to the socket
	    sizeof(serverAddress) // Size (bytes) of the address structure
	    );

	// Mark socket to listen for incoming connections
	int listening = listen(serverSocket, BACKLOG);
	if (listening < 0) {
		printf("Error: The server is not listen.\n");
		return 1;
	}

	report(&serverAddress); // Custom report function
	setHttpHeader(httpHeader); // custom function to set header
	int clientSocket;

	// wait for a connection, create a connected socket if a connection is pending

	while(1) {
		clientSocket = accept(serverSocket, NULL, NULL);
		send(clientSocket, httpHeader, sizeof(httpHeader), 0);
		close(clientSocket);
	}

	return 0;
}

void report(struct sockaddr_in *serverAddress) {
	char hostBuffer[INET6_ADDRSTRLEN];
	char serviceBuffer[NI_MAXSERV]; // DEFINED IN `<NETDB.H>`
	socklen_t addr_len = sizeof(*serverAddress);

	int err = getnameinfo(
		(struct sockaddr *) serverAddress,
		addr_len,
		hostBuffer,
		sizeof(hostBuffer),
		serviceBuffer,
		sizeof(serviceBuffer),
		NI_NUMERICHOST
		);
	if (err != 0) {
		printf("Its not working!\n");
	}
	printf("\n\nServer listening on http://%s:%s\n", hostBuffer,serviceBuffer);
}
