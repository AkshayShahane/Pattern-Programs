
// wrong program
#include<stdio.h>
main()
{
    int i,j,k;
    k=2;
    for(i=1;i<=6;i++)
    {
        if(i==(k%2==0))
        {
            k+2;
        }
        for(j=1;j<=6;j++)
        {
            if(j<=k)
            {
                if(i<=k)
                {
                    printf("*");
                }
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
}


