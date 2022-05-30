#include<stdio.h>
int main()
{
    double n;
    int bn[7]= {100,50,20,10,5,2,1},h[7],a,i,bc[5]= {50,25,10,5,1},c[5];
    scanf("%lf",&n);
    a=n;
    for(i=0; i<7; i++)
    {
        h[i]=a/bn[i];
        a=a%bn[i];
    }
    a=n*100;
    a=a%100;

for(i=0; i<5; i++)
    {
        c[i]=a/bc[i];
        a=a%bc[i];
    }
    printf("NOTAS:\n");
    for(i=0;i<6;i++)
    {
        printf("%d nota(s) de R$ %d.00\n",h[i],bn[i]);
    }
    printf("MOEDAS:\n");
    printf("%d moeda(s) de R$ 1.00\n",h[6]);
  for(i=0;i<5;i++)
  {
      printf("%d moeda(s) de R$ %.2f\n",c[i],(float)bc[i]/100);
  }

    return 0;
}
