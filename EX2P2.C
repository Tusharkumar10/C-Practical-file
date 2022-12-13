#include<stdio.h>
#include<conio.h>

void sum();
void factorial();
void power();
int length(int);
void main()
{
clrscr();
factorial();
power();
sum();
getch();
}

int length(int num)
{
int length,i;
for(i=2;num!=0;i++)
{
num/=10;
}
return i;
}

void sum()
{
int num,rem,i,sum=0;
printf("Enter a number\n");
scanf("%d",&num);
for(i=0;i<=length(num);i++)
{
rem=num%10;
sum+=rem;
num=num/10;
}
printf("Sum of digits = %d\n",sum);
}
void power()
{
int x,y,result=1,i;
printf("Enter the value of x and y to find the x to the power y \n");
scanf("%d%d",&x,&y);

for(i=1;i<=y;i++)
{
result*=x;
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