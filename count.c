#include<stdio.h>
int main()
{
int A[] = {1,2,3,4,5,6,7};
int N = sizeof(A)/sizeof(A[0]);
printf("The No of element : %d", N);
return 0;
}