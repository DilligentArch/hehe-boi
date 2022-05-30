#include<stdio.h>
int main()
{
    int n,i,count=0;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        if(a[i]<=a[i+1])
        {
            count++;
        }
    }
    if(count==n-1)
    {
        printf("Yes");
    }
    else
        printf("No");
}
