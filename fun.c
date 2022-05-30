#include<stdio.h>
void sum();
void main()
{
    printf("Gonna calculate sum of two numbers\n");
    sum();

}
void sum()
{
    int a,b;
    printf("Enter two numbers");
    scanf("%d%d",&a,&b);
    printf("The sum is %d",a+b);
}
