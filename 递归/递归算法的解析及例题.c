递归：
函数调用自身的编程技巧
毋庸置疑地，递归确实是一个奇妙的思维方式。
递归的两个必要条件
1、存在限制条件，当满足这个条件时，递归便不再继续。
2、每次递归调用之后越来越接近这个限制条件。
例题:
编写一个函数实现n^k，使用递归实现
#include <stdio.h>
#include <stdlib.h>
int power(int n, int k)
{
	if(k == 0)
	{
		return 1;
	}
	if(k == 1)
	{
		return n;
	}
	return n * power(n, k - 1);
}
int main()
{
	int n;
	int k;
	printf("请输入要求的n的k次方：\n");
	scanf("%d %d", &n, &k);
	printf("%d\n", power(n, k));
	return 0;
}
