#include<stdio.h>
int leapYear(int year) 
{
    if ((year%4==0&&year%100!=0)||(year%400==0))
	{
     printf("%d is a leap year.\n",year);	
	}else{
		printf("%d is not a leap year\n",year);
		
	}
}
int main()
 {
    int year;
    printf("Enter a year: ");
    scanf("%d", &year);
    leapYear(year); 
    
}
/*
output
Enter a year: 2024
2024 is a leap year
*/
