#include<conio.h>
#include<stdio.h>

void is_prime();
void is_armstrong();
void NCR();
void NPR();
void to_upper();
void to_lower();
void is_upper();
void is_lower();
void is_digit();
void is_alphabet();
void power();
void factorial();
int n,r,nf=1,rf=1,result,i,temp=0,tf=1; char ch;


void main()
{

     clrscr();
     printf("=================Menu driven program================\n");
     printf("1.Is_prime \n2.Is_armstrong \n3.NCR \n4.NPR \n5.To_upper \n");
     printf("6.To_lower \n7.Is_upper \n8.Is_lower \n9.Is_digit \n");
     printf("10.Is_alphabet \n11.Power \n12.Factorial \n13.Exit \n");
     printf("Enter your choice \n");
     scanf("%d",&n);
     while(1)
     {
     switch(n)
     {
//case 1: is_prime(); break;
//case 2: is_armstrong(); break;
case 3: NCR(); break;
case 4: NPR(); break;
case 5: to_upper(); break;
case 6: to_lower(); break;
case 7: is_upper(); break;
case 8: is_lower(); break;
case 9: is_digit(); break;
case 10: is_alphabet(); break;
//case 11: power(); break;
//case 12: factorial(); break;
case 13: exit(0); break;
     }
     }

     getch();

}

void NCR()
{
printf("Enter two numbers for nCr\n");
     scanf("%d%d",&n,&r);
     for(i=1;i<=n;i++)
     { nf=nf*i;  }
     for(i=1;i<=r;i++)
     { rf=rf*i;  }
     temp=n-r;
     for(i=1;i<=temp;i++)
     { tf=tf*i;  }
     result=nf/(rf*tf);
     printf("Result = %d\n",result);
}

void NPR()
{
printf("Enter two numbers for nPr\n");
     scanf("%d%d",&n,&r);
     for(i=1;i<=n;i++)
     { nf=nf*i;  }
     temp=n-r;
     for(i=1;i<=temp;i++)
     { tf=tf*i;  }
     result=nf/tf;
     printf("Result = %d\n",result);
}

void to_upper()
{ char r;
  printf("Enter a character in lower case to change in upper case \n");
  scanf("%c",&ch);
  r=ch-32;
  printf("%c\n",r);
}

void to_lower()
{ char r;
  printf("Enter a character in upper case to change in lower case \n");
  scanf("%c",&ch);
  r=ch+32;
  printf("%c\n",r);
}
void is_upper()
{
printf("Enter a character to check is it in Upper case or not\n");
scanf("%c",&ch);
if(ch>=65 && ch<=90)
{
printf("%c is in Upper case\n",ch);
}
else
{
printf("%c is not in Upper case\n",ch);
}
}

void is_lower()
{
printf("Enter a character to check is it in lower case or not\n");
scanf("%c",&ch);
if(ch>=97 && ch<=122)
{
printf("%c is in lower case\n",ch);
}
else
{
printf("%c is not in lower case\n",ch);
}
}

void is_digit()
{
printf("Enter a digit to check is it digit or not\n");
scanf("%c",&n);
if(n>=48 && n<=57)
{
printf("%c is a digit\n",n);
}
else
{
printf("%c is not a digit\n",n);
}
}

void is_alphabet()
{
printf("Enter a character \n");
scanf("%d",&ch);
if((ch>=65 && ch<=90) || (ch>=97 && ch<=122))
{
printf("%c is a character \n",ch);
}
else
{
printf("%c is not a character\n",ch);
}
}