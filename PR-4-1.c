#include<stdio.h>
int main()
{
	int rows=5,i,n=41,j;
	for(i=1;i<=rows;i++){
		for(j=0;j<i;j++){
			printf("%d ",n+j);
		}
		printf("\n");
	}
	
		
}
/*
output
41
41 42
41 42 43
41 42 43 44
41 42 43 44 45
*/