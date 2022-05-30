#include<stdio.h>
int main()
{
    int i,j,k;
    for(i=4;i>0;i--)
    {
        for(k=3;k>=i;k--)
            printf(" ");
        for(j=1;j<=i;j++)
        {
            printf("*");
        }
        printf("\n");
    }


}
