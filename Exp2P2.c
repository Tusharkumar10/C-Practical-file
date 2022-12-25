#include<stdio.h>
#include<conio.h>
void factorial();
void SumOfDigit();
void power();


void main()
{
	int num;
	
	while(1)
	{
	printf("Enter your choice \n1.Factorial \n2.Power \n3.Sum of digits \n4.Exit\n\n");
	scanf("%d",&num);
	switch(num)
	{
	case 1:factorial();break;
	case 2:power();break;
	case 3:SumOfDigit();break;
	case 4:exit(0);break;
	}
    }
}

void factorial()
{
	int num,i,result=1;
	printf("Enter a number to find factorial\n");
	scanf("%d",&num);
	for(i=num;i>0;i--)
	{
	  result*=i;	
	}
	printf("Factorial = %d\n\n",result);
}

void power()
{
	int x,y,i,result=1;
	printf("Enter the value of base(X) and power(Y)\n");
	scanf("%d%d",&x,&y);
	for(i=y;i>0;i--)
	{
		result*=x;
	}
	
	printf("Power of X and Y = %d\n\n",result);
}

void SumOfDigit()
{
	int num,i,rem,result=0;
	
	printf("Enter a number for addition of digits\n");
	scanf("%d",&num);
	
	while(num!=0)
	{
     rem=num%10;
	 result+=rem;
	 num=num/10;
    }
    printf("Addition of Digits = %d\n\n",result);  
}

