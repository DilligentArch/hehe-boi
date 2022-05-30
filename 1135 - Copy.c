#include<stdio.h>
int main()
{
    int i,x,a=0,b=0,c=0;
    printf("MUITO OBRIGADO\n");
    for(i=1;i>0;i++)
    {
        scanf("%d",&x);
        if(x==1)
            a++;
    else if(x==2)
    {
        b++;
    }
    else if(x==3)
    {
        c++;
    }
     else if(x==4)
     {
         break;
     }
    }
    printf("Alcool: %d\n",a);
    printf("Gasolina: %d\n",b);
    printf("Diesel: %d\n",c);
    return 0;
}
