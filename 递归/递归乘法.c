递归乘法。 写一个递归函数，不使用 * 运算符， 实现两个正整数的相乘
#include<stdio.h>
int multiply(int A, int B)
{
	int result;
    
	if (B > 1)
	result = multiply(A, B - 1) + A;
	else

	result = A;

	return result;
}
int main()
{
	int a,b;
	int m=0;
	scanf("%d%d",&a,&b);
	
	m=multiply(a,b);
	
	printf("%d\n",m);

	return 0;
}
