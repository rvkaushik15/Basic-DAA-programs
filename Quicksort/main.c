#include <stdio.h>
#include <stdlib.h>
#define SIZE 100
int count;
int partition(int A[SIZE],int l,int r)
{
  int i,j,pivot,temp;
  pivot=A[l];
  i=l+1;
  j=r;
  while(1)
  {
    while(pivot>=A[i]&&i<=r)
      {
          i++;
          count++;
      }
    while(pivot<A[j])
    {
        j--;
        count++;
    }
    count++;
    if(i<j)
    {
        temp=A[i];
        A[i]=A[j];
        A[j]=A[temp];
    }
    else
    {
        temp=A[j];
        A[j]=A[l];
        A[l]=temp;
        return j;
    }


  }
}
void quicksort(int A[SIZE],int l,int r)
{
    int s;
    if(l<r)
    {
        s=partition(A,l,r);
        quicksort(A,l,s-1);
        quicksort(A,s+1,r);
    }
}
void main()
{
    int i,n,A[SIZE];
    printf("Enter the Size:");
    scanf("%d",&n);
    printf("Enter the elements:");
    for(i=0;i<=n-1;i++)
    {
        scanf("%d",&A[i]);

    }
    quicksort(A,0,n-1);
    for(i=0;i<=n-1;i++)
    {
        printf("%d\t",A[i]);
    }
    printf("Count=%d",count);
    return 0;
}
