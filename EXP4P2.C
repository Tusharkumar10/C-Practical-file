#include<stdio.h>
#include<conio.h>
void main()
{
int num;
clrscr();
printf("Enter a number to convert decimal to hexadecimal \n");
scanf("%d",&num);
printf("%x\n",num);
printf("Enter a number to convert hexadecimal to decimal \n");
scanf("%x",&num);
printf("%d",num);
getch();
}