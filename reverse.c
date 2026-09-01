#include<stdio.h>
int main()
{
    int A[] = {1, 2, 3, 4, 5};
    int n = sizeof(A)/sizeof(A[0]);
    int i, j,temp;
    for(i = 1; i<n;i++)
    {
        for(i=0,j=n-1;i<j;i++,j--)
        {
            temp = A[i];
            A[i] = A[j];
            A[j] = temp;
        }

        }
        for(i=0;i<n;i++)
        printf("%d ",A[i]);
            return 0;

    }
