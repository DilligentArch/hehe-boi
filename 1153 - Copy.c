#include<stdio.h>
int main()
{
    int i, f,F=1,n;
    scanf("%d",&n);
    for(i=1;i<n;i++)
    {
        f=n-i;
        F=F*f;
    }
    printf("%d\n",F*n);
    return 0;

}
