#include <stdio.h>
#include <stdlib.h>
#include<string.h>
int count;
int bfsm(char t[20],char p[10])
{
    int m,n,i,j;
    n=strlen(t);
    m=strlen(p);
    for(i=0;i<=n-m;i++)
    {
        j=0;
        count++;
        while(j<m&&p[j]==t[i+j])
        {
            j=j+1;
            count++;
        }
        count++;
        if(j==m)
           {
                return i+1;
           }

    }
     return -1;

}
int main()
{
    char t[20],p[10];
    int res;
    printf("enter the text:");
    scanf("%s",t);
    printf("Enter the Pattern:");
    scanf("%s",p);
    res=bfsm(t,p);
    if(res==-1)
    {
        printf("Pattern not found");
    }
    else
    {
        printf("Pattern found at %d position\n",res);
        printf("count=%d",count);
    }
    return 0;
}
