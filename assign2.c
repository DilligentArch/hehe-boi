#include<stdio.h>
int main()
{
int i,n,s;
scanf("%d",&n);
printf("1 1 2");
for(i=2;i<=n;i++)
{
    s=i+(i+1);
    printf("%d ",s);
}
}
