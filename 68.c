#include<stdio.h>
main()
{
    int i,j;

    for(i=1;i<=5;i++)
    {

        for(j=1;j<=5;j++)
        {
            if(i<3 || i>3)
            {
                if(j==3)
                {
                    printf("*");
                }
                else
                {
                    printf(" ");
                }
            }

            else
            {
                printf("*");
                //printf(" ");
            }
        }
        printf("\n");
    }
}
