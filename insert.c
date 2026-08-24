#include<stdio.h>
int main()
{
    int A[10] = {1,2,3,4,5};
    int i;
    for(i=5;i>1;i--)
    {
        A[i] = A[i-1];    
    }
    A[1]=10;
    
    for(i=0;i<=5;i++)
    {
    printf("%d  ",A[i]);
    
    }
    return 0;
}