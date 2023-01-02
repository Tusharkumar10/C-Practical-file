#include<conio.h>
#include<stdio.h>

void is_prime();
void NCR();
void NPR();
void to_upper();
int n,r,nf=1,rf=1,result,i,temp,tf=1; char ch;

void main()
{

     clrscr();
     to_upper();
     getch();

}
void to_upper()
{
  printf("Enter a character in lower case to change in upper case \n");
  scanf("%c",&ch);
  printf("%c",ch);
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


