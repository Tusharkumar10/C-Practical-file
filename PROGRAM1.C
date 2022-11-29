#include<stdio.h>
#include<conio.h>

void main()
{
int a,b;
clrscr();
printf("Enter two numbers to find which number is greater\n");
scanf("%d%d",&a,&b);
if(a==b)
{
printf("Both number are equal : %d = %d\n",a,b);
}
else if(a>b)
{
printf("Greater Number = %d",a);
}
else
{
printf("Greater Number = %d",b);
}
getch();
}


