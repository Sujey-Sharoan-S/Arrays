#include<stdio.h>
main()
{
    char num[10] ={1,2,0,4};
    int add, sum;
    add = num[1]+num[3];
    sum = add;
    printf("\nThe sum of the 2 values in a array is %d",sum);
    return 0;
}