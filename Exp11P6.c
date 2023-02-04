#include<stdio.h>
#include<string.h>

int palindrome(char *);
void main()
{
	char s1[50];
	int flag;
    printf("Enter a string\n");
    gets(s1);
	flag=palindrome(s1);
	if(flag==1)
	{
		printf("Palindrome sring\n");
	}
	else
	{
		printf("Not a palindrome string\n");
	}
}

int palindrome(char *s1)
{

	int len=strlen(s1);
	int i,flag=0;
	for(i=0;i<len;i++)
	{
		if(s1[i]==s1[len-i-1])
		{
			flag=1;
			break;
		}
	    
	}
	return(flag);

}
