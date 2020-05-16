#include<stdio.h>
main()
{
    int i,j,k;
    k=0;
    for(i=1;i<=7;i++)
    {
        i<=4?k++:k--;
        for(j=1;j<=4;j++)
        {
            if(j>=5-k)
            {
                printf("*");


            }
            else
                printf(" ");
        }
        printf("\n");
    }
}
