#include <stdio.h>

int main()
{
    int rows, cols, i, j;
    printf("Enter the array row size:");
    scanf("%d",&rows);
    printf("Enter the array column size:");
    scanf("%d",&cols);
    int a[rows][cols];
    printf("\nEnter array elements:");
    for(i=0;i<rows;i++){
        for(j = 0; j < cols; j++) {
        printf("\na[%d][%d] = ",i,j);
        scanf("%d",&a[i][j]);
        }
    }
    int largest = a[0][0];
    for(i=0;i<rows;i++) 
	{
    for(j=0;j<cols;j++) 
	{
    if(a[i][j]>largest) 
	{
      largest=a[i][j];
          }
      }
    }  
    printf("Output:The largest element is: %d\n", largest);
}
/*
output
Enter the array row size: 9
Enter the array column size: 1

Enter array elements:
a[0][0] = 1234
a[1][0] = 4321
a[2][0] = 4444
a[3][0] = 5555
a[4][0] = 1111
a[5][0] = 2143
a[6][0] = 4132
a[7][0] = 6666
a[8][0] = 8181
Output:The largest element is: 8181
*/