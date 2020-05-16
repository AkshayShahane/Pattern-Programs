#include<stdio.h>
main()
{
    int i,j;
    char k='E';
    for(i=1;i<=5;i++)
    {

        for(j=1;j<=5;j++)
        {
            if(j<=6-i)
            {
                printf("%c",k);
                printf(" ");

            }
            else
                printf(" ");
        }
        k--;
        printf("\n");
    }
}
