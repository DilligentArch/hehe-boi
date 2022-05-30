#include<stdio.h>
int main()
{
    float i,a,b,c,d,e,f,s;
    int count=0;
    scanf("%f",&a);
    if(a>0)
        count++;
    scanf("%f",&b);
    if(b>0)
        count++;
    scanf("%f",&c);
    if(c>0)
        count++;
    scanf("%f",&d);
    if(d>0)
        count++;
    scanf("%f",&e);
    if(e>0)
        count++;
    scanf("%f",&f);
    if(f>0)
        count++;

    printf("%d valores positivos\n",count);


    if(a<0)
        a=0;
    else if(b<0)
        b=0;
    else if(c<0)
        c=0;
    else if(d<0)
        d=0;
    else if(e<0)
        e=0;
    else if(f<0)
        f=0;
    s=(a+b+c+d+e+f)/(float)count;
    printf("%.1f\n",s);
    return 0;
}
