#include<stdio.h>
int main()
{
    float x,a;
    scanf("%f",&x);
    if(x>=0.00&&x<=400.00)
    {
        a=x*0.15;
        x+=a;
        printf("Novo salario: %.2f\n",x);
        printf("Reajuste ganho: %.2f\n",a);
        printf("Em percentual: 15 %%\n");
    }
    else if(x>=400.01&&x<=800.00)
    {
         a=x*0.12;
        x+=a;
        printf("Novo salario: %.2f\n",x);
        printf("Reajuste ganho: %.2f\n",a);
        printf("Em percentual: 12 %%\n");
    }
    else if(x>=800.01&&x<=1200.00)
    {
        a=x*0.10;
        x+=a;
        printf("Novo salario: %.2f\n",x);
        printf("Reajuste ganho: %.2f\n",a);
        printf("Em percentual: 10 %%\n");
    }
    else if(x>=1200.01&&x<=2000.00)
    {
        a=x*0.07;
        x+=a;
        printf("Novo salario: %.2f\n",x);
        printf("Reajuste ganho: %.2f\n",a);
        printf("Em percentual: 7 %%\n");
    }
       else if(x>2000.00)
       {
        a=x*0.04;
        x+=a;

        printf("Novo salario: %.2f\n",x);
        printf("Reajuste ganho: %.2f\n",a);
        printf("Em percentual: 4 %%\n");
       }
       return 0;


}
