#include<stdio.h>

int factorial(int n)
{if(n>0)
	return n*factorial(n-1);
else
	return 1;
}
void main()
{int n;
printf("enter n");
scanf("%d",&n);
printf("%d",factorial(n));
}
