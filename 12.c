#include<stdio.h>
main()
{
    int i,j;
    char k;
    for(i=1;i<=5;i++)
    {
        k='E';
        for(j=1;j<=5;j++)
        {
            if(j<=6-i)
            {
              printf("%c",k);
              if(k>=6-i)
                {
                    k--;
                }
            }
            else
                printf(" ");
        }
        printf("\n");
    }

}
