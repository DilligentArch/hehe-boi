#include<stdio.h>
int main()
{
    int n,a[10000],i,count=0,b=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
       scanf("%d",&a[i]);
       if(a[i]>=10&&a[i]<=20)
       {
           count++;
       }
       else
        b++;
    }
    printf("%d in\n",count);
    printf("%d out\n",b);
    return 0;
}
