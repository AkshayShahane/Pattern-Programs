#include<stdio.h>
main()
{
    int i,j;
    for(i=1;i<=5;i++)
    {
        int k='A';
        for(j=1;j<=5;j++)
        {
            if(j>=6-i)
            {
                printf("%c",k);
                k++;
            }
            else
                printf(" ");
        }
        printf("\n");
    }
}
