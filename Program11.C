#include<stdio.h>
#include<conio.h>
void main()
{
char ch;
clrscr();
printf("Enter a character \n");

ch=getche();  //It displayed the value.
printf("\nYou have enterd this character = %c\n",ch);
getch(); //It did not display the value.
}