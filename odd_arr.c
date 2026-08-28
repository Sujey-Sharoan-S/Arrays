#include<stdio.h>
int main()
{
    int A[] = {2,3,4,5,6,7,8,9,11};
    int i,j,Odd = 0;
    int size = sizeof(A)/sizeof(A[0]);
    for(i=0;i<size;i++)
    {
            if(A[i]%2!=0)
            {
            Odd = A[i];
            printf(" %d ",Odd);
            }
    
    }
    
    return 0;
}