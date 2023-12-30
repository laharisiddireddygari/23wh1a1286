#include<stdio.h>
int checkalpha(char c);
void main()
{
char c;
int result;
printf("enter:");
scanf("%c",&c);
checkalpha(c);
}
int checkalpha(char c)
{
if(65<c && c<122)
        printf("ALPHABET");
else
        printf("NOT ALPHABET");
}


