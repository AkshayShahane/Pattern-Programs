#include<stdio.h>
main()
{
    int i,j;
    char k='D';
    for(i=1;i<=4;i++)
    {
        for(j=1;j<=7;j++)
        {
            if(j>=i && j<=8-i)
            {
                printf("%c",k);
            }
            else
                printf(" ");
        }
        k--;
        printf("\n");
    }
}
