#include<stdio.h>
int main() 
{
    int num,i;
    int factorial = 1;
    printf("Enter the Factorial number: ");
    scanf("%d",&num);
    for (i=1;i<=num;i++)
	 {
        factorial=factorial*i;
    }
    printf("Factorial of %d=%d\n",num,factorial);
}
/*
output
Enter the Factorial number: 5
Factorial of 5=120
*/
