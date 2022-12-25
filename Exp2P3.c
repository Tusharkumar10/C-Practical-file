#include<stdio.h>
#include<conio.h>
void prime();
void armstrong();


void main()
{
	int num;
    while(1)
	{
	  printf("Enter your choice \n1.To check Prime number \n2.To check Armstrong number \n3.Exit\n\n");
	  scanf("%d",&num);
	 switch(num)
	 {
	  case 1:prime();break;
	  case 2:armstrong();break;
	  case 3:exit(0);break;
	 }
    }
}

void prime()
{
	int num,i;
	int flag=0; 
	printf("Enter a number to check prime or not\n");
	scanf("%d",&num);
	for(i=2;i<=num/2;i++)
	{
	 if(num%i==0)
	   {
	    flag=1;
	    break;
	   }
	}
	
	if(flag==0)
	  {
	   printf("%d is a prime number\n\n",num);
	  }	
	else
	   {
	   	printf("%d is not a prime number\n\n",num);
	   }
	  
}

void armstrong()
{
	int num,rem,result=0,i,temp;
	printf("Enter a number \n");
	scanf("%d",&num);
	temp=num;
	while(temp!=0)
	 {
	   rem=temp%10;
	   result+=rem*rem*rem;
	   temp/=10;	
	 }
	 
	if(result==num)
	  {
	   printf("%d is a armstrong number\n\n",num);
	  }
	else
	   {
		printf("%d is not a armstrong number\n\n",num);
	   }
}
