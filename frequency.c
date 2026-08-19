#include<stdio.h>
int main()
{
    char nums[10] = {1,2,3,4,1,2,3,4,4,4};
    int i, j, count, maxCount = 0, mostFrequent;

    for(i = 0; i < 10; i++)
    {
        count = 0;
        for(j = 0; j < 10; j++)
        {
            if(nums[i] == nums[j])
            {
                count++;
            }
        }

        if(count>maxCount)
        {
            maxCount = count;
            mostFrequent = nums[i];
        }
    }
    printf("Most frequent number: %d\n", mostFrequent);
    printf("Frequency: %d\n", maxCount);
    return 0;
}
