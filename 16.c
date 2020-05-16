#include<stdio.h>
main()
{
    int i,j;
    char k='A';
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=5;j++)
        {
            if(j>=6-i)
            {
                printf("%c",k);
            }

            else
            {
                printf(" ");
            }

        }
        k++;
        printf("\n");
    }
}
