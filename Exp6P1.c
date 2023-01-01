#include<stdio.h>

int factorial(int);

void main()
{   int num ,f;
	printf("Enter a number to find factorial\n");
	scanf("%d",&num);
	f=factorial(num);
	printf("Factorial of %d = %d\n",num,f);
}

int factorial(int num)
{
	int fact;
    if(num==1)
    {
    	return num;
	}
	
	fact=num*factorial(num-1);
	return fact;

}
