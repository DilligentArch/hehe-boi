#include<stdio.h>
int main()
{
    int i,x,y,n;

    for(i=1;i<=n;i++)
    {
        scanf("%d%d",&x,&y);
        x=(float)x;
        y=(float)y;
        if(y==0)
        {
            printf("divisao impossivel\n");
        }
         else if(x<0&&y<0)
         {

             printf("%.1f\n",x/y);
         }
         else if(x<0)
         {
                 x*=(-1);

             printf("-%.1f\n",x/y);

         }
         else if(y<0)
         {

             y*=(-1);
             printf("-%.1f\n",x/y);

         }
        else
        {
            printf("%.1f\n",x/y);
        }
    }
    return 0;

}
