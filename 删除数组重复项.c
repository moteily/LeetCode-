#include <stdio.h>
#include <stdlib.h>
int removeDuplicates(int *nums, int numsSize);
int main(int argc, char **argv)
{
    int num[4] = {1, 3, 3, 5};
    int len = removeDuplicates(num, 4);
    for (int i = 0; i < len; i++)
    {
        printf("%d ", num[i]);
    }
    printf("\n");

    return 0;
}
//123 3 33445
int removeDuplicates(int *nums, int numsSize)
{
    int i = 0, count1 = 0;
    if (numsSize == 0)
        return 0;
    if (numsSize == 1)
        return 1;
    while (i < numsSize)
    {
        if (i + 1 == numsSize)
            break;
        if (nums[i + 1] != nums[i])
        {
            count1++;
            i++;
            if (count1 != i)
            {
                nums[count1] = nums[i];
            }
        }
        else
        {
            i++;
        }
    }
    return (count1 + 1);
}