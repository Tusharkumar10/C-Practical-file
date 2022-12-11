#include<stdio.h>
int isLeapYear(int);
void main()
{
	int year;
	printf("Enter a year\n");
	scanf("%d",&year);
	if(isLeapYear(year)==1)
	{
	printf("Leap year");	
	}
	else 
	printf("Is not a Leap year");
}

int isLeapYear(int year)
{
	if(year%400==0 || (year%4==0 && year%100!=0 ))
	return 1;
	else
	return 0;
}
