#include<stdio.h>
void swapr(int *,int *);
void swap(int,int);
void main()
{int a,b;
 printf("enter two numbers");
 scanf("%d%d",&a,&b);
 printf("before swap a=%d,b=%d\n",a,b);
 printf("in swap\n");
 swap(a,b);
 printf("after swap a=%d,b=%d\n",a,b);

 printf("before swapr a=%d,b=%d\n",a,b);
 printf("in swapr\n");
 swapr(&a,&b);
 printf("after swapr a=%d,b=%d\n",a,b);
}
void swapr(int *x,int *y)
{int t=*x;
 *x=*y;
 *y=t;
 printf("a=%d,b=%d\n",*x,*y);
}
void swap(int x,int y)
{int t=x;
 x=y;
 y=t;
 printf("a=%d,b=%d\n",x,y);
}

