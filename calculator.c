#include "main.h"
#include "main.c"
#include <stdio.h>
#include <stdbool.h>
#include <errno.h>

//Adds more than one number
int addSub(void)
{
	char i = 'e';
	float num, result;
	printf("Enter number:\n");
	scanf("%f", &num);
	while (true)
	{
		printf("Enter number:\n");
		scanf("%f", &result);
		result = result + num;
		printf("Sum: %.2f\n", result);
		num =+ result;
	}
	return (0);

}


