#include<stdio.h>
int main()
{
    int A[3][3] = {{1,2,3},{4,5,6},{7,8,9}};
    int i,j,sum = 0;
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            if(i<=j)
            {
                sum +=A[i][j];

            }
        }
    } 
    printf("Sum of the Upper Triangle elements in the matrix : %d" ,sum);
    return 0;
}