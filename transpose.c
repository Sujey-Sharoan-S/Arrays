#include<stdio.h>
int main()
{
    int A[3][3] = {{1,2,3},{4,5,6},{7,8,9}};
    int i, j;
    int transpose[3][3];
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            transpose[j][i] = A[i][j];
        }
    }
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d ",transpose[i][j]);
        }
        printf("\n");
    }
    return 0;
}