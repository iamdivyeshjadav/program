#include<stdio.h>
void countVowel(char str[]) 
{
    int a=0,e=0,i=0,o=0,u=0;
    for (int j=0;str[j]!='\0';j++) 
	{
        char ch=str[j];
        if(ch=='a')
		a++;
        else if(ch=='e') 
		e++;
        else if(ch=='i')
		 i++;
        else if(ch=='o') 
		o++;
        else if(ch=='u') 
		u++;
    }
 	printf("\nVowel Counts:\n");
    printf("a:%d\n",a);
    printf("e:%d\n",e);
    printf("i:%d\n",i);
    printf("o:%d\n",o);
    printf("u:%d\n",u);
}
int main()
 {
    char sentence[50];
    printf("Enter a sentence: ");
    scanf("%s",&sentence);
    countVowel(sentence);
}

