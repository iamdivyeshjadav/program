#include <stdio.h>
int main() 
{
    int size,i,d=1;
    printf("Enter the array size: ");
    scanf("%d",&size);
    int a[size];
    printf("\nEnter array elements:");
    for(i=0;i<size;i++){
     printf("\na[%d] = ", i);
     scanf("%d",&a[i]);
	}
    printf("Negative elements from an Array: ");
    for(i=0;i<size;i++){
    if(a[i]<0){
        if(!d){
        printf(" ");
     }
      printf("%d",a[i]);
    	d= 0;
      }
    }
    printf("\n");
}
/*
output
Enter the array size: 5
Enter array elements:
a[0] = -1
a[1] = 2
a[2] = -5
a[3] = -4
a[4] = 4
Negative elements from an Array: -1, -5, -4
*/