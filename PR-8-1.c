#include<stdio.h>
int main()
 {
    char str[100];
    char *ptr;
    int length;
    printf("Enter any string: ");
    scanf("%[^\n]s",str);
    ptr = str; 
    for (length=0;*(ptr+length)!='\0';length++){	
    }
    printf("The length of a string is: %d\n",length);
}
/*
output
Enter any string: hallo world
The length of a string is: 11
*/