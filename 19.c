#include<stdio.h>
#include<string.h>
main()
{
    int i,j,len;
    char k[]="COMPUTER";
    len=strlen(k);
    for(i=0;i<=len;i++)
    {

        for(j=0;j<=i;j++)
        {
            if(j<=i)
            {
                printf("%c",k[j]);

            }

            else
            {
                printf(" ");
            }

        }

        printf("\n");
    }
}
