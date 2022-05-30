#include<stdio.h>
int main()
{
    int i,a;
    for(i=1;i>0;i++)
    {
        scanf("%d",&a);
        if(a!=2002)
        {
            printf("Senha Invalida\n");
        }
        else
        {
              printf("Acesso Permitido\n");
        break;
        }


    }
    return 0;
}
