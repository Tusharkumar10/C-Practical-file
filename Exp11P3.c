#include<stdio.h>
void copy(char *,char *); 
void main()
{
	char s1[10],s2[10];
	puts("Enter a string");
    gets(s1);
    puts("Original string");
    puts(s1);
    copy(s1,s2);
    puts("Copied string");
    puts(s2);
}

void copy(char *s1,char *s2)
{
	while(*s1!='\0')
	{
		*s2=*s1;
		s2++;
		s1++;
	}
}

