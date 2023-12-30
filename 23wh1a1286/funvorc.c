#include<stdio.h>
int checkvorc(char);
void main()
{
int result;
char c;
printf("enter:");
scanf("%c",&c);
result=checkvorc(c);
if(result)
	printf("vowel");
else
	printf("consonant");
}
int checkvorc(char c)
{
if(c=='a' || c=='e' || c=='i' || c=='o' || c=='u')
	return 1;
else
	return 0;
}
