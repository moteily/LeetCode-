/**
 * Note: The returned array must be malloced, assume caller calls free().
 */

int *twoSum(int *nums, int numsSize, int target, int *returnSize)
{
    int *p = (int *)malloc(sizeof(int) * 2);
    for (int i = 0; i < numsSize; i++)
    {

        for (int j = 0; j != i && j < numsSize; j++)
        {
            if (nums[i] + nums[j] == target)
            {
                p[0] = i;
                p[1] = j;
                *returnSize = 2;
                return p;
            }
        }
    }
    return 0;
}