#include <stdio.h>
#include <stdlib.h>
void Bsort(int a[],int n)
{
    int i,j,temp;
    for(i=0;i<=n-2;i++)
    {
        for(j=0;j<=n-2-i;j++)
        {
            if(a[j]>a[j+1])
            {
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
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
    Bsort(a,n);
    for(i=0;i<=n-1;i++)
    {
        printf("%d",a[i]);
    }
    printf("count=%d",count);

    return 0;
}
