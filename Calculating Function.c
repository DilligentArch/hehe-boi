#include<stdio.h>
int main()
{
    int i,n,sum=0;
    scanf("%d",&n);
    for(i=2;i<=n;i++)
    {
        if(i%2!=0)
        {
            i*=-1;
            sum+=i;

        }
        else
            sum+=i;
    }
        printf("%d",sum);
}
