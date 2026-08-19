#include<stdio.h>
int main()
{
    int i;
    char ch[20] = {1,2,3,4,5};
    int max = ch[0];
    int min = ch[0];
    for(i=1;i<5;i++)
    {
        if(ch[i]>max)
        {
        max=ch[i];
        }
        if(ch[i]<min)
        {
        min=ch[i];
        }
    }
    printf("%d is the max value\n", max);
    printf("\n%d is the smallest", min);
    return 0;
}
