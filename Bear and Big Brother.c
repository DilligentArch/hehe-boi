#include<stdio.h>
int main()
{
    int i,a,b,count=0;
    scanf("%d%d",&a,&b);
    for(i=1; i>0; i++)
    {
        a*=3;
        b*=2;
        count++;
        if(a>b)
        {
            break;
        }



    }
    printf("%d\n",count);


}
