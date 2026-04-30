#include<stdio.h>
void swap(int *a,int *b)
 {
    int temp;
    temp=*a; 
    *a=*b;  
    *b=temp; 
}
int main()
 {
    int num1,num2;
    printf("Enter first number: ");
    scanf("%d", &num1);
    printf("Enter second number: ");
    scanf("%d", &num2);  
    swap(&num1,&num2);
    printf("\nswap valus:\n");
    printf("First number= %d\n",num1);
    printf("Second number = %d\n",num2);
}
/*
output
Enter first number: 18
Enter second number: 19

swap valus:
First number= 19
Second number = 18
*/