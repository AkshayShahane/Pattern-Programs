#include<stdio.h>
main()
{
    int i,j;
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=5;j++)
        {
            if(j<=5)
            {
                if(j==i)
                {
                    printf("o");
                    printf(" ");
                }

                else
                {
                    printf("x");
                    printf(" ");
                }
            }
            else
                printf(" ");

        }

       printf("\n");
    }
}


/*
o x x x x
x o x x x
x x o x x
x x x o x
x x x x o




*/
