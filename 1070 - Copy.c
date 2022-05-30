#include<stdio.h>
int main()
{
    int i,n,count=0;
    scanf("%d",&n);
    for(i=n;i>0;i++)
    {
      if(i%2!=0)
        {
            printf("%d\n",i);
            count++;
        if(count==6)
            break;

        }

    }
    return 0;
}
