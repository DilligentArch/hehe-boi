#include<stdio.h>
int main()
{
    char a[110];
    gets(a);
    int i,count=0;
    for(i=0;a[i]!='\0';i++)
    {
        if((a[i]==a[i+1])&&(a[i+1]==a[i+2])&&(a[i+2]==a[i+3])&&(a[i+3]==a[i+4])&&(a[i+4]==a[i+5])&&(a[i+5]==a[i+6]))
            count++;
    }
    if(count>=1)
        printf("YES");
    else
        printf("NO");

}
