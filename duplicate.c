#include<stdio.h>
int main()
{
    char num1[10] ={1,2,0,4};
    char num2[10] ={10,0,30,40};
    int i,j;
    
    for(i=0;i<4;i++)    
    {
        for(j=0;j<4;j++)
        {
            if (num1[i]==num2[j])
            {
                printf("The duplicate Num is %d",num1[i]);     
           }
            
            
        }
        
    }
    return 0;
}
