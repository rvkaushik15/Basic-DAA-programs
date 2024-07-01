#include <stdio.h>
#include <stdlib.h>
int count;
void Ssort(int a[],int n)
{
    int i,j,temp,min;
    for(i=0;i<=n-2;i++)
    {
      min=i;
      for(j=i+1;j<=n-1;j++)
      {
          count++;
          if(a[j]<a[min])
          {
              min=j;
          }
      }
      temp=a[i];
      a[i]=a[min];
      a[min]=temp;
    }
}
int main()
{
    int i,a[100],n;
    printf("enter the Size:");
    scanf("%d",&n);
    printf("Enter the elements:");
    for(i=0;i<=n-1;i++)
    {
        scanf("%d",&a[i]);
    }
    Ssort(a,n);
    for(i=0;i<=n-1;i++)
    {
        printf("%d",a[i]);
    }
    printf("count=%d",count);

    return 0;
}
