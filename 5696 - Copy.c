#include<stdio.h>
#include<string.h>
#define max 1000
int main()
{
    char str[max];
    scanf("%s",str);
    //strrev(str);
    int length,i;
     length=strlen(str);
    for(i=length-1;i>=0;i--)
    {
        printf("%c",str[i-length]);
        if(i%3==2 && i!=length-1)
            printf(",");
    }

    return 0;
}
