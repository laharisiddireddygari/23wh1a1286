#include<stdio.h>
void main()
{int dividend,divisor;
printf("enter dividend,divisor:\n");
scanf("%d%d",&dividend,&divisor);
printf("\ngcd\n");
printf("%d",gcd(dividend,divisor));
printf("\nrgcd\n");
printf("%d",rgcd(dividend,divisor));
}
int gcd(int dividend,int divisor)
{int rem;
if((dividend%divisor) !=0)
       {rem=dividend%divisor;
	dividend=divisor;
	divisor=rem;}

return divisor;
}
int rgcd(int dividend,int divisor)
{if(divisor==0)
	return dividend;
else
	rgcd(divisor,dividend%divisor);
}
