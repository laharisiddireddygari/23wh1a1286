#include<stdio.h>
int main()
{
  int i,b,max;
  int a[5];
  for(i=0;i<5;i++)
  {
    scanf("%d",&a[i]);
  }
    max=a[0];
    for(i=1;i<5;i++)
    {
       if(a[i]>max)  
       max=a[i];
    }  
       printf("max is %d",max);
       return 0;
}
