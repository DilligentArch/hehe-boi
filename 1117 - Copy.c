#include<stdio.h>
int main()
{
    float x,y,med;
    int i;
    for(i=1; i>0; i++)
    {
        scanf("%f",&x);
        if(x>=0&&x<=10)
        {
            break;

        }
        else
            printf("nota invalida\n");


    }
    for(i=1; i>0; i++)
    {
        scanf("%f",&y);
        if(y>=0&&y<=10)
        {
            break;
        }
        else
            printf("nota invalida\n");

    }
    med=(x+y)/2;
    printf("media = %.2f\n",med);
    return 0;

}
