#include<stdio.h>
int main()
{
    int n,f=0,s=1,i, F;
    scanf("%d",&n);
    for(i=0; i<n; i++)
    {
        if(i<=1)
            F=i;
        else
        {
            F=f+s;
            f=s;
            s=F;
        }
        printf("%d ",F);
    }
}
