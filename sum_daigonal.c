#include<stdio.h>
int main()
{
    int A[3][3] = {{2,4,6},{8,10,12},{14,16,18}};
    
    int sum=0;
    int i;
    for(i=0;i<3;i++)
    {
        sum += A[i][i];
       
    }
    printf("Sum of diagonal elements: %d", sum);
    return 0;
}