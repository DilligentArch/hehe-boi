#include<stdio.h>
int main()
{
    int age;
    scanf("%d",&age);
    if(age>0&&age<=12)
        printf("You are a child");
    else if(age>=13&&age<=19)
        printf("You are a teenager");
    else
        printf("adult");

}
