
#include<stdio.h>
int main()
{
    int A;
    int i,j;
    printf("Enter the Num of lines : ");
    scanf("%d",&A);
    for(i=A;i >=1;i--)
    {
        for(j=i;j>=1;j--)
        {
        printf("* ");
        
        }
        printf("\n");
    }
    printf("\n");
}