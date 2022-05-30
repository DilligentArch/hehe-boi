#include<stdio.h>
int main()
{
    int n,i,first=1,second =1,febo;
   scanf("%d",&n);
    printf("%d %d ",first,second );
    for(i=3;i<=n;i++)
    {
        febo=first + second;
        printf(" %d",febo);
        first=second;
        second=febo;
    }
}
