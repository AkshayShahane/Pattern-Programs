#include<stdio.h>
main()
{
    int i,j,k;
    for(i=1;i<=5;i++)
    {

       for(j=1;j<=5;j++)
        {
            if(j<=6-i)
            {
                printf("*");
                printf(" ");

            }

            else
                printf(" ");
        }
        printf("\n");
    }

}
