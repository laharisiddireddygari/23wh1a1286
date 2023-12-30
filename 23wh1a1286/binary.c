#include<stdio.h>
void main()
{ 
 int key,mid,size,i;
 int a[7];
 int low = 0,c = 0,high;
printf("\n enter the size:");
scanf("%d",&size);
printf("\n enter the ele of a:");
for(i = 0;i<size;i++)
{
 scanf("%d",&a[i]);
}
 printf("\n enter the key value:");
 scanf("%d",&key);
 high = size - 1;
 while(low <= high)
{
 mid = (low = high/2);
 if(key == a[mid])
{
 printf("search found");
 c++;
 break;
 }
 if (key>a[mid])
 low = mid-1;
 if(key<a[mid])
 high = mid-1;
}
if(c==0)
 printf("\n ele is not found");
}
