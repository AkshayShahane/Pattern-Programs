#include<stdio.h>
main()
{
    int i,j;

    for(i=1;i<=5;i++)
    {
        for(j=1;j<=10;j++)
        {
            if(j<=i || j>=11-i)
            {
                printf("*");
            }
            else
                printf(" ");
        }

        printf("\n");
    }
}

/*



*                 *
* *             * *
* * *         * * *
* * * *     * * * *
* * * * * * * * * *






*/


















