#include<stdio.h>
main()
{
        int n;
        for(int i=6;i>0;i--)
        {
            if(i%2==0)
            {
                n=i-2;
            }
            else
            {
                n=i-1;
            }
            for(int j=6;j<=n;j--)
            {
                printf("*");
                printf(" ");
            }
            printf("\n");
        }
}
