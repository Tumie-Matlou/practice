#include <stdio.h>

/**
 * main - a program that performs basic arithmetic operations
 * addition, subtraction, division and multiplication
 *
 * Return: 0 On success
 */

int main()
{
	char operator; /*declare arithmetic operator*/
	double num1, num2, result;/*declare inputs and output*/

	printf("Please enter an operator (+, - , *, /): ");/*prompt user for arithmetic operator*/
	scanf("%c", &operator);/*store operator of choice in 'operator' variable*/

	printf("Please enter two operands: ");/*prompt user for wto numbers*/
	scanf("%lf %lf", &num1, &num2);/*store numbers of choice in variables num1 and num2*/

	/*check operator and proceed with corresponding calculation*/
	if (operator == '+')
		result = num1 + num2;
	else if (operator == '-')
		result = num1 - num2;
	else if (operator == '*')
		result = num1 * num2;
	else if (operator == '/')
		result = num1 / num2;
	else
	{
		printf("Invalid operator!");
		return (1);
	}

	printf("(%2.lf) %c (%2.lf) = %2.lf", num1, operator, num2, result);/*print calculation*/
	return (0);
}
