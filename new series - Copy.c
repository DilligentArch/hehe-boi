#include<stdio.h>
int main()
{
    ///1,5,11,19
    int i,n,a;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        a=pow(i,2)+(i-1);
        printf("%d ",a);
    }
}
