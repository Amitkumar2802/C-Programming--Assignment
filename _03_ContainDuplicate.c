#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

static int compareInts(const void* a, const void* b)
{
    int x = *(const int*)a;
    int y = *(const int*)b;

    return (x > y) - (x < y);
}

bool containsDuplicate(int* nums, int numsSize)
{
    qsort(nums, numsSize, sizeof(int), compareInts);

    for (int i = 1; i < numsSize; i++)
    {
        if (nums[i] == nums[i - 1])
            return true;
    }

    return false;
}

int main()
{
    int nums[] = {1, 2, 3, 1};

    int size = sizeof(nums) / sizeof(nums[0]);

    bool result = containsDuplicate(nums, size);

    if (result)
        printf("Contains Duplicate: true\n");
    else
        printf("Contains Duplicate: false\n");

    return 0;
}