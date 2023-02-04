#include<stdio.h>

int length(char *); 

void main()
{
	char s1[10];
	int len;
	puts("Enter a string");
    gets(s1);
    puts(s1);
    len=length(s1);
    printf("String lenth : %d\n",len);
}

int length(char *s1)
{
	int len=0;
	while(*s1!='\0')
	{
		len++;
		s1++;
	}
	return(len);
	
}
