#include<stdio.h>
#include<conio.h>
void main()
{
int i=1;
clrscr();
printf("Number 1 to 10 print by while loop.\n\n");
while(i<=10)
{
printf("%d  ",i);
i++;
}
i=1;
printf("\n\nNumber 1 to 10 print by do while loop.\n\n");
do
{
printf("%d  ",i);
i++;
}while(i<=10);

printf("\n\nNumber 1 to 10 print by for loop.\n\n");
for(i=1;i<=10;i++)
{
printf("%d  ",i);
}

getch();


}