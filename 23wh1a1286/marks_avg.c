#include<stdio.h>
int main()
{
 int i,n;
 float avg[5],cpe[5],bee[5],maths[5],ap[5];
 printf("enter how many students: ",n);
 scanf("%d",&n);
 for(i=0;i<5;i++)
 {
  printf("enter information of student i",i);
  scanf("%0.2f %0.2f %0.2f %0.2f",&cpe[i],&bee[i],maths[i],ap[i]);
  avg[i]=(cpe[i]+bee[i]+maths[i]+ap[i])/4;
 }
  printf("s.no\t cpe \t bee \t maths\t ap\t avg ", i,cpe[i],bee[i],maths[i],ap[i],avg[i]);
  return 0;
}
 
 

