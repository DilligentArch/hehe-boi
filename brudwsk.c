/*#include<stdio.h>
int main()
{
    ///(1)+(1+2)+(1+2+3)+(1+2+3+4)
    int i,j,sum=0,n,num=1;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        num=1;
        printf("(");
        for(j=0;j<i;j++)
        {
            printf("%d",num);
            sum+=num;
            num++;
            if(j<i-1)
            {
                printf("+");
            }
        }
        if(i==n)
        {
            printf(")");
        }
        else
        {
            printf(")+");
        }
    }
    printf("=%d\n",sum);


}
*/
#include<stdio.h>
int main()
{
    int i,j,n,sum=0,num;
    scanf("%d",&n);
    {
        for(i=1;i<=n;i++)
        {
            num=1;
            printf("(");
            for(j=0;j<i;j++)
            {
                printf("%d",num);
                sum+=num;
                num++;
                if(j<i-1)
                    printf("+");
            }
            if(i==n)
                printf(")");
             else
                printf(")+");
        }
    }
    printf("%d",sum);
}
