#include<stdio.h>

int main()
{
    int A[]={2,1,4,6,9,12};
    int i, Sum=0;
    int size = sizeof(A)/sizeof(A[0]);
    float Avg;
    for(i=0;i<size;i++)
    {
        
        Sum += A[i];
    }

        printf("Sum is %d " ,Sum);
        
        Avg = Sum/size;
        printf("\nAvg is %f ",Avg);
       
        
    
    return 0;


}    