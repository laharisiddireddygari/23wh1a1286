#include<stdio.h>
int readarray(int A[],int n)
{int i;
printf("\nenter number of elements");
scanf("%d",&n);
for(i=0;i<n;i++)
        {printf("\nenter element");
        scanf("%d",&A[i]);
}
return n;
}

void printarray(int A[],int n)
{int i;
for(i=0;i<n;i++)
        printf("%d  ",A[i]);
}

void insertion(int A[],int n)
{int i,j,ele;
for(i=0;i<n;i++)
	{j=i-1;
	ele=A[i];
	while((j>=0) && (A[j]>ele))
	{A[j+1]=A[j];
	j--;}
A[j+1]=ele;
	}
printarray(A,n);
}

void main()
{int n,A[10];
n=readarray(A,n);
printf("\nbefore insertion sort\n");
printarray(A,n);
printf("\nafter insertion sort\n");
insertion(A,n);
}

