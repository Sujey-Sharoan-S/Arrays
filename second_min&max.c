#include<stdio.h>
int main()
{
    int A[] = {8,4,5,6,9,10,1,2,4,7,11,14,22};
    int temp,i,j;
    int size = sizeof(A)/sizeof(A[0]);
    for (i = 0; i < size; i++)
    {
        for(j = 0; j<size-1;j++)
        if(A[j]>A[j+1])
        {
           temp = A[j];

           A[j]= A[j+1];
           A[j+1] = temp;
        }
        
    }
    for(i=0;i<size;i++)
    {
        printf(" %d ",A[i]);
    }
    printf("\nSecond Min is %d ",A[1]);
   
    printf("\nSecond Max is %d ",A[size-2]);
    return 0;
    

}