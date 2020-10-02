//Header File has information related to input/output functions
#include<stdio.h>

//Main Method
int main()
{
    int i,j;
    
    //Outer Loop for the rows
    for(i=1;i<=5;i++)
    {
        //Inner loop for the columns
        for(j=1;j<=5;j++)
        printf("*");
        //Next line after a row
        printf("\n");
    }

    return 0;
}



/*
 *
 * 
 Output Of The Above Program

    *****
    *****
    *****
    *****
    *****

*
*
*/
