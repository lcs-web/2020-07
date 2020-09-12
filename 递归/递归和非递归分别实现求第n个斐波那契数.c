非递归：
#include<stdio.h>
int main () {
	int sum = 0;
	int f1 = 1 ;
	int f2 = 1 ;
    int i;
	int n;
	printf("输入第n个数:\n");
	scanf ("%d",&n);
	for(i = 1;i<=n;i++){
		sum = f1+f2;
        f1 = f2;
		f2 = sum;
	}
	printf("%d",sum);
	printf("\n");
	return 0;
}

递归：
#include <stdio.h>
int fib(int n)
{
	int f1;
	if(n == 1||n == 2) {
		f1 = 1;
		return f1;
	}
	else { 
		return (fib(n-2)+fib(n-1));
	}
}
int main()
{
	int  n;
	printf ("输入n的值:\n");
	scanf("%d",&n);
	printf("%d",fib (n));
	printf("\n");
	return 0;
}
