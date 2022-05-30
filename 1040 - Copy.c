#include<stdio.h>
int main()
{
    float a,b,c,d,avg,f;
    scanf("%f%f%f%f",&a,&b,&c,&d);
    a=a*2;
    b*=3;
    c*=4;
    d*=1;
    avg=(a+b+c+d)/10;

    printf("Media: %.1f\n",avg);
    if(avg>=7.0)
        printf("Aluno aprovado.\n");
    else if(avg<5.0)
        printf("Aluno reprovado.\n");
   else if(avg>=5.0&&avg<=6.9)
   {

        printf("Aluno em exame.\n");
        scanf("%f",&f);
        avg=(avg+f)/2;
        printf("Nota do exame: %.1f\n",f);
         if(avg>=5)
        printf("Aluno aprovado.\n");
    else
        printf("Aluno reprovado.\n");

        printf("Media final: %.1f\n",avg);
        return 0;

}}
