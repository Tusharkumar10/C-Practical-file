#include<stdio.h>

int amount(int);
void smoker();
void gender(char );
int result,age,sm ,amount1=10000,amount2=15000,amount3=20000,amount4=40000 ; 
char gen;

void main()
{
 printf("Enter your gender m for male and f for female\n");
 scanf("%c",&gen);
 printf("Enter your age\n");
 scanf("%d",&age);
 result = amount(age);
 gender(gen);
 smoker();
  
if(result==0)
 printf("Your insurance is not possible\n");
else
 printf("Your insurance amount = %d \n",result);
 
}

int amount(int age)
{
 if(age>=21 && age<=30)
 {return amount1;}
 else if(age>=31 && age<=40)
 {return amount2;}
 else if(age>=41 && age<=50)
 {return amount3;}
 else if(age>=51 && age<=60)
 {return amount4;}
 else
 {return 0;}
}
void gender(char gender)
{
 if(gender=='m')
 result= amount(age);
 if(gender=='f')
 {result=amount(age);
 result-=result*10/100;
 }
}
void smoker()
{
printf("Are you smoker 1 for yes and 0 for no\n");
scanf("%d",&sm);
 if(sm==1)
 {result+=result*10/100;}
}

