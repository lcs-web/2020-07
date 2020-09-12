难度中等275收藏分享切换为英文关注反馈峰值元素是指其值大于左右相邻值的元素。

给定一个输入数组 nums，其中 nums[i] ≠ nums[i+1]，找到峰值元素并返回其索引。

数组可能包含多个峰值，在这种情况下，返回任何一个峰值所在位置即可。

你可以假设 nums[-1] = nums[n] = -∞。


int find(int *nums, int numsSize, int l, int r) 
{
    int mid = (l + r) / 2;
    if (mid >= 0 && mid <= numsSize - 1) {
        int b = true;
        if ((mid - 1 >= 0) && nums[mid] <= nums[mid - 1]  ) {
            b = false;
        }

        if ((mid + 1 <= numsSize - 1) &&  nums[mid] <= nums[mid + 1]) {
            b = false;
        }

        if (b) {
            return mid;
        }
    }

    if (mid - 1 >= l) {
        int pos = find(nums, numsSize, l, mid - 1);
        if (pos >= 0) {
            return pos;
        }
    }

    if (mid + 1 <= r) {
        int pos = find(nums, numsSize, mid + 1, r);
        if (pos >= 0) {
            return pos;
        }
    }

    return -1;
}

int findPeakElement(int* nums, int numsSize){
    if (nums == NULL  || numsSize == 0) {
        return -1;
    }

    if (numsSize == 1) {
        return 0;
    }
    int l = 0;
    int r = numsSize - 1;
    return find(nums, numsSize, l, r);
}

