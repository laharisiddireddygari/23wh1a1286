#include<stdio.h>
int checkalpha(char c);
void main()
{
char c;
int result;
printf("enter:");
scanf("%c",&c);
result=checkalpha(c);
if(result)
	printf("ALPHABET");
else
	printf("NOT ALPHABET");
}
int checkalpha(char c)
{
if(65<c && c<122)
	return 1;
else
	return 0;
}

