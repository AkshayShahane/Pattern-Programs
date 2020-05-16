#include<stdio.h>
main()
{
    int i,j;
    for(i=1;i<=5;i++)
    {
       for(j=1;j<=5;j++)
        {
            if(j<=5)
            {
                printf("%d",j);
                printf(" ");
            }
            else
                printf(" ");
        }
        printf("\n");
    }

}


/*


1 2 3 4 5
1 2 3 4 5
1 2 3 4 5
1 2 3 4 5
1 2 3 4 5


*/
