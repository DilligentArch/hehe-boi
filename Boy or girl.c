#include<stdio.h>

int main()
{
    int l;
    char a[101];
   scanf("%s",a);
    l=strlen(a);

    if(l%2==0)
        printf("CHAT WITH HER!");
     else if(l%2!=0)
        {
                printf("IGNORE HIM!");
     }



}
