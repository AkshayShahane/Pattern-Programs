#include<stdio.h>
main()
{
    int i,j,k;
    k=4;
    for(i=1;i<=4;i++)
    {
        for(j=1;j<=7;j++)
        {
            if(j>=i && j<=8-i)
            {
                printf("%d",k);
            }
            else
                printf(" ");
        }
        k--;
        printf("\n");
    }
}
