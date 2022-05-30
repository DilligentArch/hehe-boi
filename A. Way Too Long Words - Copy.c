#include<stdio.h>
#include<string.h>
int main()
{
    int n ,e,i;
    char a[100];
    scanf("%d",&n);
    for( i=0;i<n;i++)
    {

            scanf("%s",a);

            e=strlen(a);
            if(e>10)
            {
                printf("%c%d%c",a[0],e-2,a[e-1]);
            }
            else
            {
                printf("%s",a);
            }
            printf("\n");



    }
 return 0;
}
