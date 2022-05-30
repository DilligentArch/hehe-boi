#include<stdio.h>
int main()
{
    int n,k,count=0,i;
    scanf("%d%d",&n,&k);
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    k=k-1;
    for(i=0;i<n;i++)
    {
        if(a[i]>=a[k]&&a[i]>0)
        {
            count++;
        }
    }
    printf("%d\n",count);
}
