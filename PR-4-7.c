#include<stdio.h>
int main()
{
	int i,k;
	for(i=1;i<=5;i++){
		if(i==1||i==3){
			for(k=1;k<=5;k++)
			printf("* ");
		}else if(i==2){
			printf("* ");
			for(k=1;k<4;k++)
			printf("  ");
			printf("*");
		}else
		printf("* ");
		printf("\n");
	}
}
/*
output
* * * * *
*       *
* * * * *
*
*
*/