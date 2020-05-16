#include<stdio.h>
main()
{
    int i,j;
    for(i='E';i>='A';i--)
    {
        for(j='A';j<=i;j++)
        {
            printf("%c",i);
            printf(" ");
        }
        printf("\n");
    }
}
