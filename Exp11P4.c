#include<stdio.h>
#include<string.h>

int compare(char *,char *); 
void main()
{
	char s1[10],s2[10];
	int flag=0;
	puts("Enter 1st string");
    gets(s1);
    puts("Enter 2nd string");
    gets(s2);
    flag=compare(s1,s2);
    if(flag==0)
    {
    puts("String are equals");	
	}
	else
	{
	puts("String are not equals");	
	}

}

int compare(char *s1,char *s2)
{
	int flag=0;
	while(1)
	{
		if(*s1!=*s2)
		{
			flag=1;
			break;
		}
		else
		{
		s1++;
		s2++;
		}
	}
      return(flag);
}
