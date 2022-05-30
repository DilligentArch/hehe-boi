#include<stdio.h>
#include<math.h>
int main()
{
float a,b,c;
scanf("%f%f%f",&a,&b,&c);
float s,r1,r2;
s=(b*b)-(4*a*c);

if(a==0||s<=0)
        printf("Impossivel calcular\n");
else
{

    r1=(-b+sqrt(s))/(a+a);
    r2=(-b-sqrt(s))/(a+a);
    printf("R1 = %.5f\n",r1);
    printf("R2 = %.5f\n",r2);

}
    return 0;
}
