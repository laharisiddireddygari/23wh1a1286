#include<stdio.h>

struct cmplx
{
int r;
int i;
}c1;
void main()
{struct cmplx *cptr;
cptr=&c1;
printf("enter real number:");
scanf("%d",&cptr->r);
printf("enter imaginary number:");
scanf("%d",&cptr->i);
printf("%d+(%d)i",(*cptr).r,(*cptr).i);
}


