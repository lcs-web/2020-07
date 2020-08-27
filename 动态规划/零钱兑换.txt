给定不同面额的硬币 coins 和一个总金额 amount。编写一个函数来计算可以凑成总金额所需的最少的硬币个数。如果没有任何一种硬币组合能组成总金额，返回 -1。

int coinChange(int* coins, int coinsSize, int amount){
    int i;
    int *dp=(int *)malloc(sizeof(int)*(amount+1));//dp[i]代表i金额最小的
    memset(dp,-1,sizeof(int)*(amount+1));//初始化

    //边界条件
    for(i=0;i<coinsSize&&coins[i]<=amount;i++)
    dp[coins[i]]=1;
    dp[0]=0;
    int j;
    for(i=0;i<=amount;i++)//状态转移方程
    {
        int number=amount+1;
        for(j=0;j<coinsSize;j++)
        {
            if(i-coins[j]>=0&&dp[i-coins[j]]!=-1)//首先下标必须要满足有效区间，第二，上一个金额能够到达
            number=(dp[i-coins[j]]<number?dp[i-coins[j]]:number);
        }
        if(number!=amount+1)
        dp[i]=number+1;
    }
    return dp[amount];
}
