#include<stdio.h>
int main()
{
    int i,a=-1,b;
    for(i=1;i<=40;i=i+3)
    {
        a=a*-1;
        b=i;
        b=b*a;

        printf("%d\n",b);
    }

}
