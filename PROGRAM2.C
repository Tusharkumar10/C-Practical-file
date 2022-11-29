#include<stdio.h>
#include<conio.h>

void main()
{
int a,b,c;
clrscr();
printf("Enter three numbers to find which number is greater\n");
scanf("%d%d%d",&a,&b,&c);
if(a==b && b==c)
{
printf("All the three numbers are equal : %d = %d = %d \n",a,b,c);
}
else if(a>b&&a>c)
{
printf("Greater Number = %d",a);
}
else if(b>c)
{
printf("Greater Number = %d",b);
}
else
{
printf("Greater Number = %d",c);
}
getch();
}

