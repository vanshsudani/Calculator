#include <stdio.h>
/*
Q.1 Calculator

Develop a menu-driven program to implement arithmetic operations such as +, -, *, /, and %
using UDF, switch case, and looping. Make sure that the program is endless until a certain letter
is pressed.

Example:
Input/Output:
Press 1 for +
Press 2 for -
Press 3 for *
Press 4 for /
Press 5 for %
Press 0 for the exit

Enter your choice: 1
Enter the first number: 5
Enter the second number: 3
Addition of 5 and 3 is 8

Press 1 for +
Press 2 for -
Press 3 for *
Press 4 for /
Press 5 for %
Press 0 for the exit

Enter your choice: 4
Enter the first number: 10
Enter the second number: 5
Division of 10 and 5 is 2

Press 1 for +
Press 2 for -
Press 3 for *
Press 4 for /
Press 5 for %
Press 0 for the exit
Enter your choice: 0
*/

float add(float a, float b) 
{
    return a + b;
}


float subtract(float a, float b) 
{
    return a - b;
}


float multiply(float a, float b) 
{
    return a * b;
}

int modula(int a, int b) 
{
    return a % b;
}

float divide(float a, float b)
{
    if (b != 0) 
	{
        return a / b;
    } 
	else 
	{
        printf("Error: Cannot divide by zero\n");
        return 0;
    }
}

int main() 
{
    int choice;
    float num1, num2, result;

	do
	{
        printf("Press 1 for +\n");
        printf("Press 2 for -\n");
        printf("Press 3 for *\n");
        printf("Press 4 for %%\n");
        printf("Press 5 for /\n");
        printf("Press 0 to exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        if (choice == 0) 
		{
            printf("Exiting the program. Goodbye!\n");
            break;
        }

        printf("Enter the first number: ");
        scanf("%f", &num1);
        printf("Enter the second number: ");
        scanf("%f", &num2);

        switch (choice) 
		{
            case 1:
                result = add(num1, num2);
                break;
            case 2:
                result = subtract(num1, num2);
                break;
            case 3:
                result = multiply(num1, num2);
                break;
             case 4:
            	result = modula(num1,num2);
            	break;
            case 5:
                result = divide(num1, num2);
                break;
           
            default:
                printf("Invalid choice. Please select a valid operation.\n");
                continue;
        }

        printf("Result: %.2f\n\n", result);
    }while(1); 


    return 0;
}
