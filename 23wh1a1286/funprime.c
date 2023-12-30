#include<stdio.h>
int checkprime(int);
void main()
{
int num,result;
printf("enter number:\n");
scanf("%d",&num);
result=checkprime(num);
if(result)
	printf("it is prime");
else
	printf("it is not prime");
}
int checkprime(int num)
{
int i,count=0;
for(i=0;i<=num;i++)
{    if(num%i==0)
	count++;
}
if(count==2)
	return 1;
else
	return 0;
}
	
