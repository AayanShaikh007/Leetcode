/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* twoSum(int* nums, int numsSize, int target, int* returnSize) {
    int* result = (int*)malloc(2 * sizeof(int));
    if (!result) {           // defensive, though LeetCode usually doesn't need it
        *returnSize = 0;
        return NULL;
    }


    for (int i = 0; i < numsSize; i++) {
        for (int n = 0; n < numsSize; n++) {
            if (nums[n] + nums[i] == target && n != i)  {
                result[0] = i;
                result[1] = n;
                *returnSize = 2;
                return result;
            }
        }
    }

    *returnSize = 0;
    free(result);
    return NULL;
}