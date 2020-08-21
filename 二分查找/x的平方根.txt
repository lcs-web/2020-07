实现 int sqrt(int x) 函数。

计算并返回 x 的平方根，其中 x 是非负整数。

由于返回类型是整数，结果只保留整数的部分，小数部分将被舍去。


int mySqrt(int x){
    int left = 1,right = x/2;
	int mid = (left + right) / 2;
	while(left < right)
    {
		
		if(mid == x / mid)
			return mid;
		else if(mid > x / mid)
			right = mid - 1;
		else
			left = mid + 1;

		mid = (left + right) / 2;
	}
	if(left > x / left) 
		return left-1;
	return left;

}
