#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    if(n%2==0)
    {
        printf("\nEVEN ");

    }
    else
        printf("\nODD ");
    if(n>0)
        printf("POSITIVE\n");
     else if(n<0)
     printf("NEGATIVE\n");
    else
        printf("EVEN NULL\n");

}
