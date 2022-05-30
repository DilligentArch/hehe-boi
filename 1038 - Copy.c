#include<stdio.h>
int main()
{
    int x,y;
    scanf("%d%d",&x,&y);
    float z;
    if(x==1)
    {
        z=4*y;
        printf("Total: R$ %.2f\n",z);
    }
    else if(x==2)
    {
        z=4.50*y;
        printf("Total: R$ %.2f\n",z);
    }
    else if(x==3)
    {
        z=5*y;
        printf("Total: R$ %.2f\n",z);

    }
    else if(x==4)
    {
        z=2*y;
        printf("Total: R$ %.2f",z);
    }
    else
    {
        z=1.50*y;
        printf("Total: R$ %.2f\n",z);
    }
    return 0;
}
