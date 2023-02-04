#include<stdio.h>
#include<string.h>
void reverse(char *); 

void main()
{
	char s1[10];
	puts("Enter a string");
    gets(s1);
    reverse(s1);
    
}

void reverse(char *s1)
{
	int i,len=strlen(s1);
	for(i=len-1;i>=0;i--)
	{
		printf("%c",s1[i]);
	}
}

