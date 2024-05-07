int* twoSum(int* nums, int numsSize, int target, int* returnSize) {
    int* ret = (int*)malloc(2 * sizeof(int)), n=0, k=0;
    *returnSize = 2;

    while (k<numsSize)
        {
            n = k+1;
            while (n < numsSize)
                {
                    if ((nums[k]+nums[n])==target)
                    {
                        ret[0] = k;
                        ret[1] = n;
                        return ret;
                        break;
                    }
                    n++;
                }
            k++;
        }
    return ret;
}
