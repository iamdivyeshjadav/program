#include<stdio.h>
int main()
{
	float a,b,c,d,e;
	
	printf("base salary\n");
	scanf("%f",&a);
	printf("HRA salary\n");
	scanf("%f",&b);
	printf("DA salary\n");
	scanf("%f",&c);
	printf("TA salary\n");
	scanf("%f",&d);
	e=a+(b/100.0*a)+(c/100.0*a)+(d/100.0*a);
	printf("Gross salary %f",e);
}
/*
base salary
100
HRA salary
10
DA salary
5
TA salary
8
Gross salary 123.000000
----------------------*/
