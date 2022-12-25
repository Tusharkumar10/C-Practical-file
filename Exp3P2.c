#include<stdio.h>

void main()
{
	int num,i,result=1;
	printf("Enter a number to find the factorial\n");
	scanf("%d",&num);
	for(i=1;i<=num;i++)
	{
	  result*=i;	
	}
	printf("Factorial = %d\n\n",result);
}
