#include<stdio.h>
main()
{
    int i,j;
    int k=1;
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=9;j++)
        {
            if(j>=6-i && j<=4+i)
            {
                    if(k%2!=0)
                    {
                       printf("%d",k);

                    }
                   // else
                    //{

                //    }

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
