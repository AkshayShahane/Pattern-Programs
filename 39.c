#include<stdio.h>
main()
{
    int i,j;
    char k;
    for(i=1;i<=5;i++)
    {
        k='A';
        for(j=1;j<=7;j++)
        {
            if(j<=6-i || j>=5+i)
            {
                printf("%c",k);
                k++;
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
}
