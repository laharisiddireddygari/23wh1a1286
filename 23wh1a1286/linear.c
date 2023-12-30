#include<stdio.h>
int readarray(int A[],int n)
{int i;
printf("\nenter number of elements");
scanf("%d",&n);
for(i=0;i<n;i++)
        {printf("\nenter element");
        scanf("%d",&A[i]);}
return n;
}
printarray(int A[],int n)
{int i;
for(i=0;i<n;i++)
        printf("\n%d",A[i]);
}
int linear(int A[],int n)
{int k,i;
 printf("\ngive the search element");
 scanf("%d",&k);
 for(i=0;i<n;i++)
        {if(A[i]==k)
                return i;}
 return -1;
}
void main()
{int A[5],n,result;
 n=readarray(A,n);
printarray(A,n);
result=linear(A,n);
if (result==-1)
        printf("no element");
else
        printf("element is in index %d",result);
}
