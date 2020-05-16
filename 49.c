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
               if(k%2==0)
               {
                   k=k+1;
                   printf("%d",k);

               }
               else
                  printf("%d",k);
            }
            else
                printf(" ");
        }

        printf("\n");
        k++;
    }
}



/*
        1
       333
      55555
     7777777
    999999999


*/
