#include<stdio.h>
int main()
{
    int A[]={34,11,29,5,44};
    int i;
    void bubble_sort(A[],4);
    for(i=0;i<=4;i++)
    {
        printf("%d",A[]);
    }
    void bubble_sort(int A[],int N)
    {
        int round,temp,i;
        for(round=1;round<=N-1;round++)
        {
            for(i=0;i<=N-1-round,i++)
            {
                if(A[i]>A[i+1])
                {
                    temp=A[i];
                    A[i]=A[i];
                    A[i+1]=temp;
                }
            }
        }
    }
}
