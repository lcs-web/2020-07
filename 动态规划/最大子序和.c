给定一个整数数组 nums ，找到一个具有最大和的连续子数组（子数组最少包含一个元素），返回其最大和。

int maxSubArray(int* nums, int numsSize){
    int max =nums[0];
    for (int i=0; i<numsSize; i++) {   
        int n=0;
        for (int x=i; x<numsSize; x++) {
            n=n+nums[x];
            if (n>max) {
                max=n;
            }
        }
    }
    return max;
}
