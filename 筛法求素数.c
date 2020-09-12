此代码不用到bool型数组，相对简单但思路不变。
思路：
把数组所有元素赋值为1，从下标为2的元素判断如果是1，
那么他的倍数全部复制为0，依次循环。最后输出元素为1
的下标。

#include<stdio.h>
int main()
{    
    
    int i,j,n;
	int a[100];
	scanf("%d",&n);
	
	for(i=0;i<=n;i++)
	{
		a[i]=1;
	}

	  for(i=2;i<=n;i++)
	  {        
		if(a[i]==1)
        {			
			for(j=2;i*j<=n;j++)
			{
				a[i*j]=0;
			}
		}
        
    }
    
	for(i=2;i<n+1;i++)
        if(a[i]==1)
		{
            printf("%d\n",i);
		}
		
		return 0;
}
