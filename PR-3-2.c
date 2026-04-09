#include<stdio.h>
int main()
{
	int a,n;
	printf("enter number:\n");
	scanf("%d",&n);
	for(;n!=0;n/=10){
		a++;
	}
	printf("total number of digits :%d ",a);
}
/*
output
enter number:
12776
total number of digits :5
--------------------------------
*/
