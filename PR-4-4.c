#include<stdio.h>
int main()
{
	int i,j,n;
	for(i=5;i>=1;i--){
		for(n=5;n>i;n--){
			printf("  ");}
		for(j=1;j<=i;j++){
			if(j%2!=0)
			printf(" 1");
			else
			printf(" 0");
		}
		printf("\n");
	}
}
/*
output
 1 0 1 0 1
   1 0 1 0
     1 0 1
       1 0
         1
*/