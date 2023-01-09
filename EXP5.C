#include<conio.h>
#include<stdio.h>

void is_prime();
void NCR();
void NPR();
void to_upper();
void to_lower();
void is_upper();
void is_lower();
void is_digit();
void is_alphabet();
int n,r,nf=1,rf=1,result,i,temp,tf=1; char ch;


void main()
{

     clrscr();
     is_digit();
     getch();

}
void is_digit()
{
printf("Enter a digit to check is it digit or not\n");
scanf("%d",&n);
if(n>=48 && n<=57)
{
printf("%d is a digit\n",n);
}
else
{
printf("%d is not a digit\n",n);
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
void to_lower()
{ char r;
  printf("Enter a character in upper case to change in lower case \n");
  scanf("%c",&ch);
  r=ch+32;
  printf("%c\n",r);
}
void to_upper()
{ char r;
  printf("Enter a character in lower case to change in upper case \n");
  scanf("%c",&ch);
  r=ch-32;
  printf("%c\n",r);
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


