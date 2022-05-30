#include<stdio.h>
int main()
{
    int i,n,a,b,c,d,e,f,y=0,z=0;
   char x[16];
    scanf("%d",&n);
    for(i=1; i<=n; i++)
    {
        scanf("%d",x[16]);

        a=x[16]/100000;

        b=x[16]/10000;

        b=b%10;

        c=x[16]/1000;
        c=c%10;

        x[16]=x[16]%1000;
        d=x[16]/100;

        e=x[16]/10;

        e=x[16]%100;
        e=e/10;

        f=x[16]%10;

        y=a+b+c;
        z=d+e+f;
        if(y==z)
            printf("YES\n");

        else
            printf("NO\n");

    }


}
