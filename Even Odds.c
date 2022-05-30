#include<stdio.h>
int main()
{
    int i,n,k;
    scanf("%d",&n);
    scanf("%d",&k);
    int a[n];
    for(i=1;i<=n;i++)
    {
        if(i%2!=0)
        {
            a[i-1]=i;
    }
    for(i=1;i<=n;i++)
    {
        if(i%2==0)
        {
            a[(n/2)+1]=i;
        }
    }
    printf("%d",a[k-1]);

}
}
