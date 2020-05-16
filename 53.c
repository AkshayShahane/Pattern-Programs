#include<stdio.h>
main()
{
    int i,j,k;
    k=1;
    for(i=1;i<=5;i++)
    {

        for(j=1;j<=9;j++)
        {
            if(j>=6-i && j<=4+i)
            {
               printf("%d",k);
               if(k>1)
               {
                   k--;
               }

            }
            else
                printf(" ");

        }
        k+2;
        printf("\n");

    }
}



/*
        1
       321
      54321
     7654321
    987654321


*/
