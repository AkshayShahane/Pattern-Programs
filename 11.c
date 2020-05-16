#include<stdio.h>
main()
{
    int i,j;
    for(i='E';i>='A';i--)
    {

       for(j='E';j>='A';j--)
        {
                if(j<=i)
                {
                    printf("%c",i);
                    printf(" ");
                }
                else
                    printf(" ");
        }
            printf("\n");

        }

    }


