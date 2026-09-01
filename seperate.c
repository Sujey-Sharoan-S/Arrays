#include<stdio.h>
int main()
{
    int A[100];
    int i,Positive[50],Negative[50];
    int p = 0 , n = 0;
    for(i=0;i<7;i++)
    {
        printf("Enter the value of A[%d]: ",i);
        scanf("%d",&A[i]);
    }
    for(i=0;i<7;i++)
    {
        
       printf( " %d ",A[i]);
        if(A[i]>0)
        {
        Positive[p] = A[i];
        p++;
        }
        else if (A[i]<0)
        {
        Negative[n] = A[i];
        n++;
        }
        else if (A[i] == 0)
        printf("\n Zero =  %d ", A[i]);
    }
    printf("\n Positive numbers Are ");
    for(i=0; i<p; i++)
    {
    printf(" %d " , Positive[i]);
    }
    printf("\n Negative numbers Are ");
    for(i=0; i<n; i++)
    {
        printf(" %d " , Negative[i]);
    }
    
    return 0;
}