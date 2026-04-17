#include <stdio.h>
int main() 
{
    int r,c,i,j;
    printf("Enter the array row and column size: ");
    scanf("%d",&r);
    c = r;
    int a[r][c],k[c][r];
    printf("Enter array elements:\n");
    for (i=0;i<r;i++){
    for (j=0;j<c;j++){
        printf("a[%d][%d] ", i, j);
        scanf("%d",&a[i][j]);
        }
    }
    for (i=0;i<r;i++) {
        for (j=0;j<c;j++) {
        k[j][i]=a[i][j];
        }
    }
    printf("\nThe matrix of array:\n");
    for (i=0;i<c;i++){
        for (j=0;j<r;j++){
        printf("%d ",k[i][j]);
        }
        printf("\n");
    }
}
/*
output
Enter the array row and column size: 3
Enter array elements:
a[0][0] 1
a[0][1] 2
a[0][2] 3
a[1][0] 4
a[1][1] 5
a[1][2] 6
a[2][0] 7
a[2][1] 8
a[2][2] 9

The matrix of array:
1 4 7
2 5 8
3 6 9
*/
