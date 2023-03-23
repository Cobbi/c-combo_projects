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

int multiply(void)
{
	int num, result;
	printf("Enter numbe:\n");
	scanf("%d", &num);
	while (1)
	{
		printf("Enter number:\n");
		scanf("%d", &result);
		result *= num;
		printf("%d x %d = %d\n", num, result, result);
		num =+ result;
	}
	return (0);
}

int divide(void)
{
	double num, result;
	printf("Enter number:\n");
	scanf("%lf", &num);
	while (true)
	{
		printf("Enter number:\n");
		scanf("%lf", &result);
		result = num / result;
		if (result == 0)
		{
			printf("Can't divide by 0\nTry again!!!");
		}
		else 
		{
			printf("%lf ÷ %lf = %.2lf\n", num, result, result);	
		}
		num =+ result;
	}
	return (0);
}

