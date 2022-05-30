#include<stdio.h>
int main()
{
    char a[110];
    int i,l;
    gets(a);
    l=strlen(a);
    for(i=0;i<l;i++)
    {
        if(a[i]>=a[i+2])
        {
            a[i]=a[i+2];
        }
    }
    puts(a);

}
