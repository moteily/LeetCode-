#include <stdio.h>
#include <stdlib.h>
int searchInsert(int *nums, int numsSize, int target);
int main(int argc, char **argv)
{
    int nums[4] = {1, 3, 5, 6};
    int ret = searchInsert(nums, 4, 0);
    printf("%d\n", ret);
    return 0;
}

int searchInsert(int *nums, int numsSize, int target)
{
    for (int i = 0; i < numsSize; i++)
    {
        if (nums[i] >= target)
            return i;
    }
    return numsSize;
}