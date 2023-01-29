#include<stdio.h>

void addition();
void subtraction();
void transpose();
void input();
void output();
int mat1[3][3],mat2[3][3],mat3[3][3],i,j;
void main()
{
int n;
printf("1.Matrix Addition \n2.Matrix Subtraction \n3.Matrix Transpose \n4.Exit");
while(1)
{
	printf("\nEnter your choice : ");
	scanf("%d",&n);
	switch(n)
	{
		case 1 : input(); addition(); output(); break;
		case 2 : input(); subtraction(); output(); break;
      	case 3 : transpose();break;
		case 4 : exit(0); break;
	}
}
	

}

void input()
{
	printf("Enter the 9 elements of matrix 1\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
		scanf("%d",&mat1[i][j]);
        }
	}
	printf("Enter the 9 elements of matrix 2\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
		scanf("%d",&mat2[i][j]);
        }
	}
	
}

void output()
{
	
	  for(i=0;i<3;i++)
	   { 
		for(j=0;j<3;j++)
		{
		   printf("%d ",mat3[i][j]);
		}
		printf("\n");
	   }
}
void addition()
{
	for(i=0;i<3;i++)
	{
	  for(j=0;j<3;j++)
		{
			mat3[i][j]=mat1[i][j]+mat2[i][j];
		}
	}
	printf("Addition of two matrix \n");
	
}

void subtraction()
{
	for(i=0;i<3;i++)
	{
	  for(j=0;j<3;j++)
		{
			mat3[i][j]=mat1[i][j]-mat2[i][j];
		}
	}
	printf("Subtraction of two matrix \n");
	
}

void transpose()
{
	
	printf("Enter the 9 elements of matrix \n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
		scanf("%d",&mat1[i][j]);
        }
    }
    printf("Entered matrix\n");
    for(i=0;i<3;i++)
	{
	  for(j=0;j<3;j++)
		{
			printf("%d ",mat1[i][j]);
		}
		printf("\n");
	}
	printf("Transpose matrix\n");
    for(i=0;i<3;i++)
	{
	  for(j=0;j<3;j++)
		{
			printf("%d ",mat1[j][i]);
		}
		printf("\n");
	}
}
