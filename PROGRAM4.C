#include<stdio.h>
#include<conio.h>
void main()
{ int ch;
 clrscr();
 printf("******************* Month Calendar ********************\n");
 printf("Enter a number between 1 to 12 for display month name\n");
 printf("Enter 13 for Exit.\n");
 while(1)
 {
 printf("Enter your choice\n");
 scanf("%d",&ch);
 switch(ch)
   {
    case 1:printf("January\n");break;
    case 2:printf("February\n");break;
    case 3:printf("March\n");break;
    case 4:printf("April\n");break;
    case 5:printf("May\n");break;
    case 6:printf("June\n");break;
    case 7:printf("July\n");break;
    case 8:printf("August\n");break;
    case 9:printf("September\n");break;
    case 10:printf("October\n");break;
    case 11:printf("November\n");break;
    case 12:printf("December\n");break;
    case 13:exit(0);break;
   }
 }
 getch();
}
