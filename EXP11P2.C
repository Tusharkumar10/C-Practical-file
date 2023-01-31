#include<stdio.h>
#include<conio.h>
#include<string.h>

void StrReverse(int,char *);
void main()
{
char a[20];
int len;
clrscr();
printf("Enter the string\n");
scanf("%[^\n]",a);
len=strlen(a)
StrReverse(len,a);

getch();
}

int strlength(char *p)
{
int len=0;
while(*p!='\0')
{
len++;
p++;
}
return len;

}
void StrReverse(int len,char *p)
{

for(len=len-1;len>=0;len--)
printf("%c",p[len]);
}