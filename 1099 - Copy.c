#include<stdio.h>
int main()
{
    int n,i,j,x,y,sum=j;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        scanf("%d%d",&x,&y);
        if(x==y)
        {
            printf("0\n");
        }
        else if(x>y)
        {
            if(x-y==0)
                printf("0\n");
            else if(y%2!=0)
            {
                j=y;
                while(j<=x)
                {

                   sum+=j;
                   j+=2;
                }
                printf("%d\n",sum);
            }
        }
    }

}
