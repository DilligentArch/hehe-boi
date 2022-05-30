#include<stdio.h>
#include<string.h>

int main()
{
    char a[100],b[100];
    int l,i,j=0,k;
   gets(a);
    l=strlen(a);
     b[0]=a[0]+32;
   for(i=0;i<l;i++)
    {


        if(a[i]=='s')
            b[j]='$';
        else if(a[i]=='i')
            b[j]='!';
        else if(a[i]='o')
        {
            b[j]='(';

            b[j+1]=')';

        }
        else
            b[j]=a[i];

j++;
    }
k=strlen(b);
b[k+1]='.';
    puts(b);
}
