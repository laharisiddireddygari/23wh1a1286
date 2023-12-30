#include<stdio.h>
int main()
{
int num,rem, rev=0;

printf("Enter a number:");
scanf("%d",&num);
while(num!=0)
{
rem=num%10;
rev=rev*10+rem;
num/=10;
}
 if(num==rev)
{
printf("the given no is pilindrome");
}
 else
{
printf("the given no is not  pilindrome");
}
return 0;
}
