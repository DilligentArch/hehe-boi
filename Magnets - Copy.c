#include<stdio.h>
int main()
{
    int n,count=0;;
    char a[100000];
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(int i=0;i<n-1;i++)
    {
        if(a[i]!=a[i+1])
        {
            count++;
        }

    }count++;
    printf("%d",count);
}
