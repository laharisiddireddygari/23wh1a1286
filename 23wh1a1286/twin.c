#include<stdio.h>

int checkprime(int num)
{
int i,count=0;
for(i=1;i<=num;i++)
 {	if(num%i==0)
		count++;
 }
	if(count==2)
		return 1;
	else
		return 0;
}

void twinrange(int lb,int ub)
{
int num;
for(num=lb;num<=ub;num++)
 	if(checkprime(num) && checkprime(num+2))
		printf("(%d,%d)\n",num,num+2);
}

void main()
{
int lb,ub;
printf("enter range:");
scanf("%d%d",&lb,&ub);
twinrange(lb,ub);
}
