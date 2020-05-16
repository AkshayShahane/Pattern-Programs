#include<stdio.h>
main()
{
    int i,j;
    for(i='A';i<='E';i++)
    {

       for(j='A';j<='E';j++)
        {
            if(j<='E')
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


/*

A B C D E
A B C D E
A B C D E
A B C D E
A B C D E

*/
