#include<stdio.h>
void main()
{
 int  a,b,c;
 printf("Enter the values of a and b");
 scanf("%d%d",&a,&b);
 c=a;
 a=b;
 b=c;
 printf("%d is a \n %d is b", a,b);
 a=a+b;
 a=a-b;
}
