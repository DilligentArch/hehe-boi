#include<stdio.h>
int main()
{
    int x,a[3];
    scanf("%d",&x);
    a[0]=x/365;
    x=x%365;
    a[1]=x/30;
    x=x%30;
    a[2]=x/24;
    printf("%d ano(s)\n",a[0]);
    printf("%d mes(es)\n",a[1]);
    printf("%d dia(s)\n",x);
    return 0;
}

