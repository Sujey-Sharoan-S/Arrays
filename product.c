#include<stdio.h>
int main()
{
    int A[2][2] = {{1,2},{3,4}};
    int B[2][2] = {{5,6},{7,8}};
    int i,j,k, product[2][2];
    int sum;
    
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            sum =0;
            for(k=0;k<2;k++)
            {
                sum += A[i][k]*B[k][j];
                product[i][j] = sum;
            }
            

        }
        
    }
    printf("Product of 2 matrices is: \n");
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            printf("%d ",product[i][j]);
        }
        printf("\n");
    
    }
    return 0;
}