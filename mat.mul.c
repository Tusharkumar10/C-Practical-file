#include"stdio.h"
 int a[3][3],b[3][3],c[3][3],i,j,k;
 
void mul();
void main()
{
   mul();

}   
    void mul()
    {

    
       printf("Enter the elements of 1st matrix\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
          scanf("%d",&a[i][j]);
        }
    }
       printf("Enter the element of 2nd matrix\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
          scanf("%d",&b[i][j]);
        }
    }

    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            c[i][j]=0;
            for(k=0;k<3;k++)
            {
              c[i][j]+=a[i][k]*b[k][j];
            }
            
            
    }
          
        }
        printf("Addition of two matrix\n");
         for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
          printf("%d ",c[i][j]);

        }
        printf("\n");

    }
}