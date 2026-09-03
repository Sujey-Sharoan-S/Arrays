#include<stdio.h>
int main()
{
    int A[2][2] = {{0,0},{0,0}};
    int B[2][2] = {{0,0},{0,0}};
    int count = 0;
    int i,j;
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
           if(A[i][j]==0)
           count++;
           if(B[i][j]==0)
           count++;
            
            

        }
       
    }
     printf("%d ", count);
    return 0;
}