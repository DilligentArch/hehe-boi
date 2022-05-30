#include<stdio.h>
#define max 1000
int main()
{
    int i,j,num[max],range,flag=1;
    scanf("%d",&range);
    for(i=0;i<range;i++)
    {
        scanf("%d",&num[i]);
    }
    for(i=0;i<range;i++)
    {
        for(j=i+1;j<range;j++)
        {
            if(num[i]>num[j])
            {
                flag=0;
                break;
            }
        }
    }
    if(flag==1)
        printf("Yes");
    else
        printf("No");

    return 0;
}
