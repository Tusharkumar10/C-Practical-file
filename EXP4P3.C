#include<stdio.h>
#include<conio.h>
void main()
{
int num;
clrscr();
printf("Enter a number to convert octal to hexadecimal \n");
scanf("%o",&num);
printf("%x\n",num);
printf("Enter a number to convert hexadecimal to octal \n");
scanf("%x",&num);
printf("%o",num);
getch();
}