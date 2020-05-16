#include<stdio.h>
main()
{
    int i,j,k;
    k=3;
    for(i=1;i<=7;i++)
    {

        for(j=1;j<=4;j++)
        {
            if(j<=k)
            {
                printf("%d",k);
                i<=4?k++:k--;
                //printf(" ");

            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
}
