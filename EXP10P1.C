#include<stdio.h>
#include<conio.h>

void main()
{
int a=60;
int *p=&a;
clrscr();
printf("Address of p varible = %u\n",p);
//printf("Address of pointer %u\n",&p);
//printf("Address of pointer %u\n",p);
p++;
printf("After increment address of p variable %u\n",p);
p--;
printf("After decrement addres of p variable %u\n",p);
getch();
}