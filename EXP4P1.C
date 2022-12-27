#include<stdio.h>
#include<conio.h>
void main()
{
int num;
clrscr();
printf("Enter a number to convert decimal to octal \n");
scanf("%d",&num);
printf("%o\n",num);
printf("Enter a number to convert octal to decimal \n");
scanf("%o",&num);
printf("%d",num);
getch();
}