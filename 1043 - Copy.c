#include<stdio.h>
int main()
{
    float a,b,c,t;
    scanf("%f%f%f",&a,&b,&c);
    if((a+b)>c&&(b+c)>a&&(a+c)>b)
    {
        printf("Perimetro = %.1f\n",a+b+c);
    }
    else
    {
        t=.5*(a+b)*c;
        printf("Area = %.1f\n",t);
    }
    return 0;
}
