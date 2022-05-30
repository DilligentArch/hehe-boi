#include<stdio.h>
int main ()
{
    //10 no, prime number

    int n,i,ove=0;//1;
    scanf("%d",&n);//2,3,5,7,11,13,17
    for(i=2;i<n;i++)//n=7
    {
        if(n%i==0)
        ove=ove+1;

    }
    if(ove==0)
        printf("Prime");
    else
        printf("Not prime ");


}
