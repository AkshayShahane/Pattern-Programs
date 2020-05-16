#include<stdio.h>
main()
{
    int i,j,k;
    for(i=1;i<=5;i++)
    {
        k=i;
        for(j=1;j<=9;j++)
        {
            if(j<=2*i-1)
            {
                if(j%2==0)
                {
                    printf("*");
                }
                else
                    {
                        printf("%d",i);
                        //i=i+2;
                    }
            }
            else
                printf(" ");
        }

        printf("\n");
    }
}
