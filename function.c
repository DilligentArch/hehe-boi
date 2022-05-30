#include<stdio.h>
int main()
{
    int i=2,n,sum=0;
    ///scanf("%d",&n);
    while(i<=5)
    {
        if(i%2==0)
            printf("%d ",i);
        else
            i*=-1;
            printf("%d ",i);
        i++;
    }

}
