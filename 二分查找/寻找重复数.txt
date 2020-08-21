给定一个包含 n + 1 个整数的数组 nums，其数字都在 1 到 n 之间（包括 1 和 n），
可知至少存在一个重复的整数。假设只有一个重复的整数，找出这个重复的数。



int findDuplicate(int* nums, int numsSize){
     int i, mid, left = 1, right = numsSize -1;
     int count = 0; 
     mid = numsSize / 2;
     while(left != right){
         count = 0;
         for(i = 0; i < numsSize; i++){
             if(nums[i] <= mid) count++;
         }
         if(count > mid){
              right = mid;
        } 
         else{
             left = mid + 1;
         }
         mid = (left + right) / 2;
     }
     return left;
}

