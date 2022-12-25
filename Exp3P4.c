#include<stdio.h>

void main()
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
