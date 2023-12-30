#include<stdio.h>
int checkamstrong(int);
void main()
{
int num,result;
printf("enter number:\n");
scanf("%d",&num);
result=checkamstrong(num);
if(result)
        printf("it is amstrong");
else
        printf("it is not amstong");
}
int checkamstrong(int num)
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
        return 1;
else
        return 0;
}


