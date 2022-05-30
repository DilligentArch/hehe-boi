#include<stdio.h>
int main()
{
    int i,n,count=0;
    char a[10];
    scanf("%d",&n);
    for(i=1; i<=n; i++)
    {
        scanf("%s",a);
        if(a[1]=='+')
        {
            count++;
        }
        else
        {
            count--;
        }



    }printf("%d",count);
}
