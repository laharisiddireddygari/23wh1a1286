#include<stdio.h>
int main()
{
  int r,c,i,j;
  printf("Enter a rows and colums: ");
  scanf("%d %d",&r,&c);
  int arr[r][c];
  printf("enter values:");
  for(i=0;i<r;i++)
  {
    for(j=0;j<c;j++)
    {
      scanf("%d",&arr[i][j]);
    }
  }
    for(i=0;i<r;i++)
    {
      printf("\n");
      for(j=0;j<c;j++)
      {
        printf("%d ",arr[i][j]);
      }
    }
     return 0;
}
