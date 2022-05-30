
#include<stdio.h>
#include<string.h>
#define max 1000
int main()
{
    char a[max],a1[max];
    gets(a);
    int i=0,j=0,l;

    if(a[0]>=97 && a[0]<=122)
    {
        a[0]=a[0]-32;
    }

    l= strlen(a);
    for(i=0; i<=l+1; i++)
    {
        if(a[i]=='s')
        {
            a[i]='$';
        }
        else if(a[i]=='i')
        {
            a[i]='!';
        }
        else if(a[i]=='o')
        {
            a[i]='(';
            a[i+1]=')';
        }



    }
    a[l]='.';
a[l+1]='\0';


    puts(a);



    return 0;
}
