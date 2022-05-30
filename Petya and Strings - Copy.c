#include<stdio.h>
int main()
{
    char a[110],b[110] ;
    scanf("%s",a);
    scanf("%s",b);

    int i,j,l,L;
    l=strlen(a);
    for(i=0;i<l;i++)
    {
        if(a[i]<97)
        {
             a[i]=a[i]+32;
        }


    }
     L=strlen(b);
    for(j=0;j<L;j++)
    {
        if(b[j]<97)
        {
             b[j]=b[j]+32;
        }

    }

    printf("%d",strcmp(a,b));
}
