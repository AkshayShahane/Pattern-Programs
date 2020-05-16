#include<stdio.h>
main()
{
        int n;
        for(int i=0;i<6;i++)
        {
            if(i%2==0)
            {
                n=i+2;
            }
            else
            {
                n=i+1;
            }
            for(int j=0;j<n;j++)
            {
                printf("*");
                printf(" ");
            }
            printf("\n");
        }
}
