#include<stdio.h>

int isEven(int);
void main()
{
	int num;
	printf("Enter a number\n");
	scanf("%d",&num);
	if(isEven(num)==1)
	printf("Given number is : Even\n");
	else
    printf("Given number is : Odd\n");	
}

isEven(int num)
{
	if(num%2==0)
	{
	return 1;	
	}
	else
	{
	return 0;
	}
}
