#include<stdio.h>
int main()
{
    int i=0,n;
    scanf("%d",&n);
    while(i<=n)
    //for(i=0;i<=n;i+3)
    {
        printf("%d %d %d PUM\n",i+1,i+2,i+3);
        i+=3;
    }
    return 0;
}
