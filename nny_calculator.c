/**
 * This app is a calculator which can perform the basic math functions of
 * addition, subtraction, multiplication, division, square root, factorial,
 * and rounding a number to 3 decimal places.
 */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <stdbool.h>

int main(void)
{
	int option;
	double num1, num2, num3, num4, num5;
	double sum;
	double subtract;
	double multiply;
	double divide;
	double squareroot;
	int num, fact;
	double round;


/* Introduction */
	printf("\nLET'S CALCULATE! by NNY\n\n");
	printf("This application carries out basic math calculations\n\n");

/* Menu */
	printf("MENU\n\n");
	printf("Which operation would you like to perform?\n\n");
	printf("Type 1 for Addition\n");
	printf("Type 2 for Subtraction\n");
	printf("Type 3 for Multiplication\n");
	printf("Type 4 for Division\n");
	printf("Type 5 for Square Root\n");
	printf("Type 6 for Factorial!\n");
	printf("Type 7 for Rounding A Number To 3 Decimal Places\n\n");

/* Retrieve input from user */
	scanf("%d", &option);

/* Calculations */

	if (option == 1)
	{
		printf("\nLet's Add!\n\nInput the two numbers you would like to add, separated by a space:\n\n");
		// printf("\nnum1 num2 num3 num4 num5\n\n");

		scanf("%lf %lf", &num1, &num2);

		sum = num1 + num2;

		printf("\nResult: %lf plus %f is %.1f\n\n", num1, num2, sum);
	}

	else if (option == 2)
	{
		printf("\nLet's Subtract!\n\nInput the two numbers you would like to subtract, separated by a space:\n\n");

        scanf("%lf %lf", &num1, &num2);

        subtract = num1 - num2;

        printf("\nResult: %lf minus %f is %.1f\n\n", num1, num2, subtract);
	}

	else if (option == 3)
    {   
        printf("\nLet's Multiply!\n\nInput the two numbers you would like to multiply, separated by a space:\n\n");

        scanf("%lf %lf", &num1, &num2);

        multiply = num1 * num2;

        printf("\nResult: %lf multiplied by %f is %.1f\n\n", num1, num2, multiply);
    }

	else if (option == 4)
    {
        printf("\nLet's Divide!\n\nInput the two numbers you would like divided by each other, separated by a space:\n\n");

        scanf("%lf %lf", &num1, &num2);

        divide = num1 / num2;

        printf("\nResult: %lf divided by %f is %.1f\n\n", num1, num2, divide);
    }

	else if (option == 5)
    {
        printf("\nLet's Find Square Roots!\n\nInput the number you would like to find the square root of:\n\n");

        scanf("%lf", &num1);

        squareroot = sqrt(num1);

        printf("\nResult: The square root of %f is %.1f\n\n", num1, squareroot);
    }

	else if (option == 6)
    {   
        printf("\nFactorial... Yay!\n\nInput a positive integer you would like to find the factorial of:\n\n");

        scanf("%d", &num);

			fact = 1;
			for (int i = 1; i <= num; i++)
			{
				fact *= i;
			}

        printf("\nResult: The factorial of %d is %d\n\n", num, fact);
    }

	else if (option == 7)
    {   
        printf("\nLet's Round Numbers!\n\nInput the number you would like to round to 3 decimal points:\n\n");

        scanf("%lf", &round);

        printf("\nResult: Rounding %f to 3 decimal points gives %.3f\n\n", round, round);
    }

	else
    {   
        printf("\nInvalid input! Type a number from 1 - 7.\n\n");
		
		//main();
		//printf("Which operation would you like to perform?\n\n");
    	//printf("Type 1 for Addition\n");
    	//printf("Type 2 for Subtraction\n");
    	//printf("Type 3 for Multiplication\n");
    	//printf("Type 4 for Division\n");
    	//printf("Type 5 for Square Root\n");
    	//printf("Type 6 for Factorial!\n");
    	//printf("Type 7 for Rounding A Number To 3 Decimal Places\n\n");
    }

	return (0);

}
