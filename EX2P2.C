#include<stdio.h>
#include<conio.h>

void factorial();
void power();
void main()
{
clrscr();
factorial();
power();
getch();
}

void power()
{
int x,y,result,i;
printf("Enter the value of x and y to find the x to the power y \n");
scanf("%d%d",&x,&y);
result=x;
for(i=1;i<=y;i++)
{
result=x;
}
printf("X to the power Y = %d\n",result);
}

void factorial()
{
int num,fact=1,i;
printf("Enter a number to find factorial\n");
scanf("%d",&num);
for(i=1;i<=num;i++)
{
fact= fact*i;
}
printf("Factorial = %d\n",fact);
}