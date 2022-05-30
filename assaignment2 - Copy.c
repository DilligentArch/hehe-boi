#include<stdio.h>
int main()
{
    int a, b,d,e;
    float c,f,p;
    scanf("%d %d %f",&a,&b,&c);
     scanf("%d %d %f",&d,&e,&f);
     p=b*c+e*f;
     printf("VALOR A PAGAR: R$ %.2f\n",p);
     return 0;

}
