#include<stdio.h>

void findminimum();
void findmaximum();
void findsumofarray();

void main()
{
	int n;
	printf("1.Minimum value in array \n2.Maximum value in array \n3.Sum of array \n4.Exit\n");
	while(1)
	{
		printf("Enter your choice\n");
		scanf("%d",&n);
		switch(n)
		{
		case 1 :findminimum();break;
        case 2 :findmaximum();break;
        case 3 :findsumofarray();break;	
		case 4 :exit(0);break;
		}
	}
	
}

void findminimum()
{
	int a[5],i,min;
	printf("Enter the elements of array in intezer to find minimum value\n");
	for(i=0;i<5;i++)
	{
		scanf("%d",&a[i]);
	}
	
    min=a[0];
	for(i=0;i<5;i++)
	{
	if(a[i]<min)
		{
			min=a[i];
		}	
	}	
	printf("\nMinimum value in array is = %d\n",min);
}

void findmaximum()
{
	
	int a[5],i,max;
	printf("Enter the elements of array in intezer to find maximum value\n");
	for(i=0;i<5;i++)
	{
		scanf("%d",&a[i]);
	}
	
    max=a[0];
	for(i=0;i<5;i++)
	{
	if(a[i]>max)
		{
			max=a[i];
		}	
	}	
	printf("\nMaximum value in array is = %d\n",max);
}

void findsumofarray()
{
 int a[5],i,sum=0;
	printf("Enter the elements of array in intezer to find sum of array\n");
	for(i=0;i<5;i++)
	{
		scanf("%d",&a[i]);
	}

	for(i=0;i<5;i++)
	{
	sum+=a[i];
	}	
	printf("\nSum of value in array is = %d\n",sum); 	
}
   
