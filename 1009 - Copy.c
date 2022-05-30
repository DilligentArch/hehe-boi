#include<stdio.h>
int main()
{
    char n[50];
    gets(n);
   double a,b,t;
   scanf("%lf%lf",&a,&b);
   b*=.15;
   t=a+b;
   printf("TOTAL = R$ %.2lf\n",t);
   return 0;
}
