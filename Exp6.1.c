#include<stdio.h>

int fact(int);
int fibo(int);
int ack(int,int);

int n,num,result,m,n,result,i,n1=0;
void main()
{
	printf("1.Factorial \n2.Fibonaci series \n3.Ackermann function \n4.Exit\n");
	
	while(1)
	{
	printf("Enter your choice\n");
	scanf("%d",&num);
	switch(num)
	 {
	case 1 :printf("enter a number to find factorial\n");
	        scanf("%d",&n);
	        result=fact(n);
	        printf("Result = %d\n",result);
	break;
	case 2 :printf("Enter the value of n to print fibonaci series\n");
	        scanf("%d",&n);
	        printf("%d ",n1);
	        for(i=1;i<=n;i++)
	        {
			printf("%d ",fibo(i));	
			}
			printf("\n");
	break;
	case 3 :printf("Enter the value of m and n for ackermann function\n");
	        scanf("%d%d",&m,&n);
	        result=ack(m,n);
	        printf("Result = %d\n",result);
	break;
	case 4 :exit(0); break;
	 }
    }

}

int fact(int n)
{
	int f;
	if(n==1)
	{
		return 1;
	}
	f=fact(n-1)*n;
	return f;
}

int fibo(int n)
{
	int fi;
	if(n==1||n==2)
	{
		return 1;
	}
	return(fibo(n-1)+fibo(n-2));
}

int ack(int m,int n)
{
	if(m==0)
	{
		return(n+1);
	}
	else if(m>0&&n==0)
	{
		return(ack(m-1,1));
	}
	else if(m>0&&n>0)
	{
		return(ack(m-1,ack(m,n-1)));
	}
}
