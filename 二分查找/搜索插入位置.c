给定一个排序数组和一个目标值，在数组中找到目标值，并返回其索引。
如果目标值不存在于数组中，返回它将会被按顺序插入的位置。你可以
假设数组中无重复元素。


int searchInsert(int* nums, int numsSize, int target)
{
    int a=0, b=numsSize-1, mid;
    while(a <= b){
        mid = (a + b) / 2;
        if(target > nums[mid])
            a = mid + 1;
        else if(target < nums[mid])
            b = mid - 1;
        else return mid;
    }
    if(target<nums[mid])
	{
		return mid;
	}
    else
	{
		return mid+1;
	}
}

