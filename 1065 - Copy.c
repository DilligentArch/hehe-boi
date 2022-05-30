#include<stdio.h>
int main()
{
    int i,a[4],c=0;
    for(i=0;i<=4;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<=4;i++)
    {
        if(a[i]<0)
        {
            a[i]=(-1)*a[i];
            if(a[i]%2==0)
                c++;
        }
        if(a[i]%2==0)
                c++;
    }
    printf("%d\n",c);
    return 0;
}
