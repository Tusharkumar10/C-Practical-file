#include<stdio.h>
#include<conio.h>
void main()
{
char a[50];int i;
clrscr();
printf("Enter your name\n");
scanf("%[^\n]s,&a);
printf("%s",a);
getch();
}
