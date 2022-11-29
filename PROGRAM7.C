#include<stdio.h>
#include<conio.h>
int a,b,c,ch;
void add();
void sub();
void mul();
void div();

void main()
{
 clrscr();
 printf("******************* Arthmetic operations ********************\n");
 printf("1.Addition \n2.Subtraction \n3.Multiplication \n4.Division \n5.Exit \n");

 do{
 printf("Enter your choice\n");
 scanf("%d",&ch);
 switch(ch)
   {
    case 1:add();break;
    case 2:sub();break;
    case 3:mul();break;
    case 4:div();break;
    case 5:exit(0);break;
   }
 }while(1);
 getch();
}

void add()
{
  printf("Enter two numbers to add\n");
  scanf("%d%d",&a,&b);
  c=a+b;
  printf("Addition = %d\n",c);
}

void sub()
{
  printf("Enter two numbers to subtract\n");
  scanf("%d%d",&a,&b);
  c=a-b;
  printf("Subtraction = %d\n",c);
}
void mul()
{
  printf("Enter two numbers to multiply\n");
  scanf("%d%d",&a,&b);
  c=a*b;
  printf("Multiplication = %d\n",c);
}
void div()
{
  float a,b,c;
  printf("Enter two numbers to divide\n");
  scanf("%f%f",&a,&b);
  c=a/b;
  printf("Division = %.1f\n",c);
}