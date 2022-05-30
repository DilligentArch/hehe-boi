#include<stdio.h>
#include<math.h>
int main()
{
    double temp,a,b,c;
    scanf("%lf%lf%lf",&a,&b,&c);

   if(a<b)
   {
       temp=a;
       a=b;
       b=temp;
   }
   if(a<c)
   {
       temp=a;
       a=c;
       c=temp;
   }
   if(b<c)
   {
       temp=b;
       b=c;
       c=temp;
   }



    if(a>=b+c)
      printf("NAO FORMA TRIANGULO\n");
    else if(pow(a,2)==pow(b,2)+pow(c,2))
        printf("TRIANGULO RETANGULO\n");
    else if(pow(a,2)>(b,2)+pow(c,2))
        printf("TRIANGULO OBTUSANGULO\n");
    else if(pow(a,2)<pow(b,2)+pow(c,2))
        printf("TRIANGULO ACUTANGULO\n");
      if(a==b&&b==c&&a==c)
        printf("TRIANGULO EQUILATERO\n");
      else if((a==b&&a!=c)||(c==b&&a!=c))
        printf("TRIANGULO ISOSCELES\n");



     return 0;


}
