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
                printf("%c",j);
                printf(" ");

            }
            else
                printf(" ");
        }
        printf("\n");
    }

}
