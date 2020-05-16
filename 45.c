#include<stdio.h>
main()
{
    int i,j,k;
    k='A';
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=9;j++)
        {
            if(j==6-i || j==4+i)
            {
                printf("%c",k);
            }
            else
                printf(" ");
        }
        k++;
        printf("\n");
    }
}
