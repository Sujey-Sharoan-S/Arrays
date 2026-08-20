#include<stdio.h>
int main()
{
    char num1[10] ={1,2,0,4};
    char num2[10] ={10,20,30,40};

    int add, sum;
    add = num1[1]+num2[3];
    sum = add;
    printf("\nThe sum of the 2 values in a array is %d",sum);
    return 0;
}
