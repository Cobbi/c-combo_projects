#include <stdio.h>

int main(int argc, char const *argv[])
{
	printf("\n\n\t\t\tWelcome to Awesome Banking...\n\n");
	// Declare Variables
	int i, choice;
	float cash = 0;
	char c;

	do {
		printf("Enter\n1--Withdraw\n2--Deposit\n3--Check Balance\n ");
		scanf("%d", &choice);

		switch(choice) {
		case 1: {
			int withdraw;
			printf("Enter Amout to withdraw\n");
			scanf("%d", &withdraw);

			if(withdraw % 100 == 0) {
				if(cash >= withdraw) {
					cash -= withdraw;
					printf("Amount After withdraw of cash is %f\n", cash);
				} else {
					printf("You do not have enough Amount to withdraw.Please make Deposit\n");
				}
			} else {
				printf("Enter withdraw amount in 100s\n");
			}
			break;
		}
	case 2: {
		int deposit;
		printf("Enter Amount to deposit\n");
		scanf("%d", &deposit);

		if(deposit % 100 == 0) {
			cash = cash + deposit;
			printf("Balance After Depositing Amount: %f\n", cash);
		} else {
			printf("Please Enter Amount in 100s\n");
		} 
		break;
		}
	case 3: {
		printf("Balance in the Account is %f\n", cash);
		break;
	}
    default: {
	    printf("Enter a Valid Choice\n");
	    break;
}
	}
	    printf("To Continue Press 'Y' else any letter\n\n");
	fflush(stdin);
	scanf("%c", &c);
	} while(c == 'Y' || c == 'y');

	printf("\t\t\tThanks for using our ATM\n\n");
	return 0;
}