#include <stdio.h>
#include <stdlib.h>

int* twoSum(int* nums, int numsSize, int target, int* returnSize)
{
    int* answer = malloc(2 * sizeof(int));
    *returnSize = 0;

    for (int i = 0; i < numsSize; i++)
    {
        for (int j = i + 1; j < numsSize; j++)
        {
            if (nums[i] + nums[j] == target)
            {
                answer[0] = i;
                answer[1] = j;
                *returnSize = 2;
                return answer;
            }
        }
    }

    free(answer);
    return 0;
}

int main()
{
    int nums[] = {2, 7, 11, 15};
    int target = 9;
    int returnSize;

    int numsSize = sizeof(nums) / sizeof(nums[0]);

    int* result = twoSum(nums, numsSize, target, &returnSize);

    if (returnSize == 2)
    {
        printf("Indices: [%d, %d]\n", result[0], result[1]);
    }
    else
    {
        printf("No solution found\n");
    }

    free(result);

    return 0;
}