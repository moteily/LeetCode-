#include <stdio.h>
#include <stdlib.h>
int removeElement(int *nums, int numsSize, int val);
int main(int argc, char **argv)
{
    int num[2] = {3, 5};
    int len = removeElement(num, 2, 6);
    for (int i = 0; i < len; i++)
    {
        printf("%d ", num[i]);
    }
    printf("\n");
    return 0;
}
int removeElement(int *nums, int numsSize, int val)
{

    int i = 0, j = 0, count1 = 0;
    int flag = 0;
    if (numsSize == 0)
        return 0;
    if (numsSize == 1 && nums[0] == val)
        return 0;
    if (numsSize == 1 && nums[0] != val)
        return 1;
    //  3  12331133456773
    while (j < numsSize)
    {
        if (nums[j] != val)
            flag++;
        j++;
    }
    if (flag == j)
        return numsSize;
    while (count1 < numsSize)
    {

        if (count1 + 1 == numsSize)
            break;
        if (nums[i] == val)
        {
            count1++;
            if (nums[count1] != val)
            {
                int temp = nums[i];
                nums[i] = nums[count1];
                nums[count1] = temp;
                i++;
            }
        }
        else
        {
            i++;
            count1++;
            //flag = 1;
        }
    }
    //  if(flag==1)
    //  return numsSize;
    //  else
    return i;
}