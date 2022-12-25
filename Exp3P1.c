#include<stdio.h>

void main()
{
	int i,n,n1=0,n2=1,n3;
	printf("How many numbers you want to display in fibonacci series\n");
	scanf("%d",&n);
	printf("%d %d",n1,n2);
	for(i=2;i<=n;i++)
	{
		n3=n1+n2;
		printf(" %d",n3);
		n1=n2;
		n2=n3;
	}
}
