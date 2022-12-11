#include<stdio.h>
int isVowel(char);
void main()
{
	char ch;
	printf("Enter a chracter \n");
	scanf("%c",&ch);
	isVowel(ch);
	if(isVowel(ch)==1)
	printf("%c : It is vowel",ch);
	else
	printf("%c : It is not a vowe ",ch);

}

int isVowel(char ch)
{
	if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'||ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U')
	return 1;
	else
	return 0;
}
