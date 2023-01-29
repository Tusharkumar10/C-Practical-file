#include<stdio.h>

void main()
{
	int a[10],i,*p,sum=0;
	printf("Enter the elements of array\n");
	for(i=0;i<10;i++)
	{
		scanf("%d",&a[i]);
	}
	p=a;
	for(i=0;i<10;i++)
	{
		sum+=*(p+i);
		
	}
	printf("Sum =%d\n",sum);
}
