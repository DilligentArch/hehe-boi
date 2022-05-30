#include<stdio.h>
int main()
{
    char a[110];
    int i ,count=0;
    gets(a);
   for(i=0;i<100;i++)
   {
     if(a[i]=='H'||a[i]=='Q'||a[i]=='9'||a[i]=='+');
     {
         count++;
     }

   }
   if(count==0)
    printf("NO");
   else
    printf("YES");
}
