#include<stdio.h>

int main()
{
    int A[3][3] = {{1,2,3},{4,5,6},{7,8,9}};
    int i,j;
    int row = 0;
    int column = 0;
    int sum;
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            if(i==1)
            {
                row += A[i][j];
            }
            if(j==1)
            {
                column += A[i][j];
            }
        }
    }
    sum = row + column;
    printf("Sum of the Rows and Columns of the matix is : %d", sum);
    return 0;
}