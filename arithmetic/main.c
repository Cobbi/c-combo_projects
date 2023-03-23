#include "main.h"
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	char select;

	printf("Welcome to Combo Calculator\n");
	printf("1: Addition and Subtraction\t2: Multiplication\t3: Division\t e: Exit\n");
	printf("Select your choice:\n");
    scanf("%c", &select);
	if (select == '1')
	{
		addSub();
	}
	else if (select == '2')
	{
		multiply();
		
	}
	else if (select == '3')
	{
		divide();
		
	}
    else if (select == 'e')
    {
        printf("Exiting..");
        exit(0);
    }
	else
	{
		printf("Wrong choice\nTry again!!!\n");
	}

}