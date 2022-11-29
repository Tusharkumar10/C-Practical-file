#include<stdio.h>
#include<conio.h>
void main()
{ int ch;
 clrscr();
 printf("*******************Day Calendar ********************\n");
 printf("1.Monday \n2.Tuesday \n3.Wednesday \n4.Thursday \n5.Friday \n6.Saturday \n7.Sunday \n8.Exit\n");

 while(1)
 {
 printf("Enter your choice\n");
 scanf("%d",&ch);
 switch(ch)
   {
    case 1:printf("Monday\n");break;
    case 2:printf("Tuesday\n");break;
    case 3:printf("Wednesday\n");break;
    case 4:printf("Thursday\n");break;
    case 5:printf("Friday\n");break;
    case 6:printf("Saturday\n");break;
    case 7:printf("Sunday\n");break;
    case 8:exit(0);break;
   }
 }
 getch();
}
