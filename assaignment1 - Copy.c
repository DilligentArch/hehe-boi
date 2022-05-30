#include<stdio.h>
int main()
{
    int x;
    printf("Enter your mark: ");
    scanf("%d",&x);

    if(x>=90 && x<=100)
        printf("The grade is: 'A+' ");
  else  if(x>=80 && x<=89)
        printf("The grade is: 'A-' ");

    else if(x>=70 && x<=79)
        printf("The grade is: 'B+' ");

    else if(x>=60 && x<=69)
        printf("The grade is: 'B-' ");

    else if(x>=50 && x<=59)
        printf("The grade is: 'c' ");

    else
        printf("The grade is: 'F'  ");
return 0;

}
