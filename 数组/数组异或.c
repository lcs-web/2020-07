数组异或操作。给两个整数a,b。定义a[i]=b+2*i;输出所有元素异或后的结果

#include<stdio.h>

int main()
{	
	int a[20];
	int i,b,n;
	int m=0;
	scanf("%d",&n);
	scanf("%d",&b);

	for(i=0;i<n;i++)
	{
		a[i]=b+2*i;
		m^=a[i];

	}
	
	printf("%d\n",m);
		
	return 0;
}

