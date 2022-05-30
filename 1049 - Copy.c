#include<stdio.h>
int main()
{
    char a[100];
    gets(a);
    if(a=='vertebrado')
    {
        char b[100];
        gets(b);
        if(b=='ave')
        {
            char c[100];
            gets(c);
           if(c=='carnivoro')
            {
              printf("aguia\n");

            }
            else if(c=='onivoro')
            printf("pomba\n");
        }
        else if(b=='mamifero\n')
        {
            char c[100];
            gets(c);
            if(c=='onivoro')
            {
                printf("homem\n");
            }
            else if(c=='herbivoro')
            {
                printf("vaca\n");

            }
        }

    }
}

