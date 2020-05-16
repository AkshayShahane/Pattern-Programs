#include<stdio.h>
main()
{
    int i,j;
    char k=5;
    for(i=1;i<=5;i++)
    {

        for(j=1;j<=5;j++)
        {
            if(j<=6-i)
            {
                printf("%d",k);
                printf(" ");

            }
            else
                printf(" ");
        }
        k--;
        printf("\n");
    }
}
