#include<stdio.h>
int main()
{
    int n,i,p,q,count=0;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        scanf("%d%d",&p,&q);

        if(p-q>=2)
        {
            count++;
        }
        else if(q-p>=2)
        {
            count++;
        }
    }
    printf("%d",count);
}
