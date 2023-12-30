#include<stdio.h>
void checkvorc(char);
void main()
{
int result;
char c;
printf("enter:");
scanf("%c",&c);
checkvorc(c);

}
void checkvorc(char c)
{
if(c=='a' || c=='e' || c=='i' || c=='o' || c=='u')
         printf("vowel");
else
        printf("consonant");
}

