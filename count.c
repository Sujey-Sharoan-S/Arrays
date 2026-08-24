#include<stdio.h>
int main()
{
int A[10] = {1,2,3,4,5,6,7};
int N = sizeof(A)/sizeof(A[1]);
printf("The No of element : ", N);
return 0;
}