#include<stdio.h>
int main()
{
    int i,n,a,count=0;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        scanf("%d",&a);
        if(a>0)
            count++;

    }
    if(count==0)
    {
        printf("EASY");
    }
    else
        printf("HARD");
}
