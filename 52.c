#include<stdio.h>
main()
{
    int i,j,k;

    for(i=1;i<=5;i++)
    {
        k=1;
        for(j=1;j<=9;j++)
        {
            if(j>=6-i && j<=4+i)
            {
               printf("%d",k);
               k++;
            }
            else
                printf(" ");
        }

        printf("\n");

    }
}



/*
        1
       123
      12345
     1234567
    123456789


*/
