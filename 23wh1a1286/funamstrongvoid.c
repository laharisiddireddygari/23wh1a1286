#include<stdio.h>
void checkamstrong(int);
void main()
{
int num,result;
printf("enter number:\n");
scanf("%d",&num);
checkamstrong(num);
}
void checkamstrong(int num)
{
int t,remainder,sum=0;
t=num;
while(num!=0)
        {
        remainder=num%10;
        sum=sum+remainder*remainder*remainder;
        num=num/10;
        }
if(sum==t)
        printf("AMSTRONG");
else
        printf("NOT AMSTRONG");
}

