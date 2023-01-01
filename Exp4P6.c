#include<stdio.h>
#include<conio.h>
#include<string.h>

void ToLower();
void ToUpper();
void ToMerge();
void ToCopy();
void ToCompare();
void ToReverse();

char s1[50],s2[50],s3[50];


void main()
{
 int num;
 puts("================================================== STRING FUNCTION ==================================================");
 puts("1.ToLower \n2.ToUpper \n3.ToMerge \n4.ToCopy \n5.ToCompare \n6.ToReverse \n7.Exit");
 while(1)
 {
   printf("Enter you choice\n");
   scanf("%d",&num);
 switch(num)
 {
 case 1:ToLower();break;	
 case 2:ToUpper();break;	
 case 3:ToMerge();break;	
 case 4:ToCopy();break;	
 case 5:ToCompare();break;	
 case 6:ToReverse();break;	
 case 7:exit(0);break;	
 }
 }
 
}

void ToLower()
{
	puts("Enter a string in capital letter to change in lower letters");
	scanf("%s",s1);
	printf("%s\n",strlwr(s1));
}

void ToUpper()
{
	puts("Enter a string in lower letter to change in capital letters");
	scanf("%s",s1);
	printf("%s\n",strupr(s1));
}

void ToMerge()
{
	puts("Enter two strings to merge");
	scanf("%s%s",s1,s2);
	printf("%s\n",strcat(s1,s2));
}

void ToCompare()
{
	puts("Enter two strings to compare ");
	scanf("%s%s",s1,s2);
	if(strcmp(s1,s2)==0)
	puts("String is equal");
	else
	puts("String are not equal");
}

void ToCopy()
{
    puts("Enter a string for copy ");
	scanf("%s",s1);
	printf("String 1 = %s\n",s1);	
		
	strcpy(s2,s1);
	printf("Copy string = %s\n",s2);
}

void ToReverse()
{
	puts("Enter a string to reverse");
	scanf("%s",s1);
	printf("%s\n",strrev(s1));
}
