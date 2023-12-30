#include<stdio.h>
void checkprime(int);
void main()
{
int num;
printf("enter number:\n");
scanf("%d",&num);
checkprime(num);
}
void checkprime(int num)
{
int i,count=0;
for(i=1;i<=num;i++)
   if(num%i==0)
        count++;
if(count==2)
        printf("PRIME");
else
        printf("NOT PRIME");
}


