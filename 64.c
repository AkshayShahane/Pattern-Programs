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
                    printf("x");
                    printf(" ");
                }

                else
                {
                    printf("o");
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
x o o o o
o x o o o
o o x o o
o o o x o
o o o o x



*/
