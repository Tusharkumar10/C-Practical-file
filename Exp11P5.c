#include<stdio.h>
#include<string.h>
void concate(char *,char *);
void main()
{
	char s1[50],s2[50];
	puts("Enter 1st string");
    gets(s1);
    puts("Enter 2nd string");
    gets(s2);
    concate(s1,s2);
    puts("Concated string ");
    puts(s1);
}

void concate(char *s1,char *s2)
{
while(1)
	{
		if(*s1=='\0')
		{
			*s1=*s2;
			
			if(*s2=='\0')
			{
				break;
			}
			s1++;
			s2++;
		}
		else
		{
			s1++;
		}
	}	
}
