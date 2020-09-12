你总共有 n 枚硬币，你需要将它们摆成一个阶梯形状，第 k 行就必须正好有 k 枚硬币。

给定一个数字 n，找出可形成完整阶梯行的总行数。

n 是一个非负整数，并且在32位有符号整型的范围内。


int arrangeCoins(int n)
{
       if(n == 0)
        return 0;
    else 
    {
        long low = 1;
        long high = n;
        while(low <= high)
        {
            long long mid = (low + high)/2;
            long long a = mid * (mid + 1)/2;
            if(a == n)
                return mid;
            else if(a > n)
                high = mid -1;
            else
                low = mid +1;
        }
        return low-1;
    }
}
