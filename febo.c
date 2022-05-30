#include<stdio.h>
int main()
{
    int n,i,first=0,second=1,febo=1;
    scanf("%d",&n);
    printf("%d,%d,",first,second);
    for(i=3;i<=n;i++)
    {
        first=second;
        second=febo;
        febo=first+second;
        printf("%d,",febo);
    }

}
