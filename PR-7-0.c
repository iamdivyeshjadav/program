#include <stdio.h>
void add(int a, int b)
 {
    printf("Addition of %d and %d is %d\n",a,b,a+b);
}
void subtract(int a,int b)
 {
    printf("Subtraction of %d and %d is %d\n",a,b,a-b);
}
void multiply(int a,int b)
 {
    printf("Multiplication of %d and %d is %d\n",a,b,a*b);
}
void divide(int a,int b)
 {
    if (b!=0)
        printf("Division of %d and %d is %d\n",a,b,a/b);
    else
        printf("Error: Division by zero is not allowed.\n");
}
void modulo(int a,int b)
 {
    if (b!=0)
        printf("Modulo of %d and %d is %d\n",a,b,a%b);
    else
        printf("Error: Division by zero is not allowed.\n");
}
int main()
 {
    int choice,num1,num2;
    while (1) 
	{
        printf("\nPress 1 for +\n");
        printf("Press 2 for -\n");
        printf("Press 3 for *\n");
        printf("Press 4 for /\n");
        printf("Press 5 for %%\n");
        printf("Press 0 for the exit\n");   
        printf("\nEnter your choice: ");
        scanf("%d",&choice);
        if (choice==0) 
		{
            printf("Exiting program\n");
            break;
        }
        printf("Enter the first number:");
        scanf("%d",&num1);
        printf("Enter the second number:");
        scanf("%d",&num2);
        switch (choice) 
		{
            case 1:add(num1,num2); 
			break;
            case 2:subtract(num1,num2);
			 break;
            case 3:multiply(num1,num2);
			 break;
            case 4:divide(num1,num2);
			 break;
            case 5:modulo(num1,num2);
			 break;
            default:printf("Invalid choice Please try again.\n");
        }
    }
}
/*
output
Press 1 for +
Press 2 for -
Press 3 for *
Press 4 for /
Press 5 for %
Press 0 for the exit

Enter your choice: 1
Enter the first number: 7
Enter the second number: 7
Addition of 7 and 7 is 14

Press 1 for +
Press 2 for -
Press 3 for *
Press 4 for /
Press 5 for %
Press 0 for the exit

Enter your choice: 2
Enter the first number: 7
Enter the second number: 7
Subtraction of 7 and 7 is 0

Press 1 for +
Press 2 for -
Press 3 for *
Press 4 for /
Press 5 for %
Press 0 for the exit

Enter your choice: 3
Enter the first number: 7
Enter the second number: 7
Multiplication of 7 and 7 is 49

Press 1 for +
Press 2 for -
Press 3 for *
Press 4 for /
Press 5 for %
Press 0 for the exit

Enter your choice: 4
Enter the first number: 7
Enter the second number: 7
Division of 7 and 7 is 1

Press 1 for +
Press 2 for -
Press 3 for *
Press 4 for /
Press 5 for %
Press 0 for the exit

Enter your choice: 5
Enter the first number: 7
Enter the second number: 7
Modulo of 7 and 7 is 0

Press 1 for +
Press 2 for -
Press 3 for *
Press 4 for /
Press 5 for %
Press 0 for the exit

Enter your choice:0
*/
