#include<stdio.h>
main()
{
    int i,j,k,l;
    k=0;
    for(i=1;i<=7;i++)
    {
        l=3;
        i<=4?k++:k--;
        for(j=1;j<=4;j++)
        {
            if(j<=k)
            {
                printf("%d",l);
                printf(" ");
                l--;
            }
            else
                printf(" ");
        }

        printf("\n");
    }
}
