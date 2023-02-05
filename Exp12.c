#include<stdio.h>
#include<string.h>
struct student 
{
	char name[20];
	int age;
	int semester;
	int marks[5];
	int sum[5];
	
};

void main()
{
	int i=0;
	struct student s[10];
	printf("Enter the student details\n");
    for(i=0;i<5;i++)   
	{
		printf("Enter Student %d details \n",i+1);
		puts("Enter name");
		fflush(stdin);
		gets(s[i].name);
		puts("Enter age");
		scanf("%d",&s[i].age);
		puts("Enter semester");
		scanf("%d",&s[i].semester);
		puts("Enter maarks out of 100");
		for(i=0;i<5;i++)
		{
		scanf("%d",&s[i].marks);
		s[i].sum=s[i].sum+s[i].marks;	
		}
		
    }

printf("====================================================================\n");
    for(i=0;i<5;i++)
	{	printf("Student %d details \n",i+1);
		printf("Name = %s\n",s[i].name);
		printf("Age = %d\n",s[i].age);
		printf("Semester=%d\n",s[i].semester);
		printf("Total Marks=%d\n",s[i].sum);
	}
	
}
