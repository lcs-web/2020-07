欧几里得算法求最大公约数


#include<stdio.h>
int ouji(int x,int y);
int main()
{	
	int a,b;
	int m;

	scanf("%d%d",&a,&b);
	m=ouji(a,b);

	printf("最大公约数是%d\n",m);

	
	return 0;
}
int ouji(int x,int y)
{
	int n;
	int result;

	if(x%y==0)
	{
		result=y;
	}
	else
	{
		while(x%y)
		{
			n=x%y;
			x=y;
			y=n;
		}
		result=n;
	}
	return result;
}
