#include<stdio.h>
#include<conio.h>
#include<string.h>
int strlength(char *);
void main()
{
char a[20];
int len,i;
clrscr();
printf("Enter the string\n");
scanf("%[^\n]",a);
printf("the length of string : ");
len=strlength(a);
printf("%d\n",len);
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