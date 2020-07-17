重新排列数组。给你一个数组a，数组中有 n 个元素，按 [x1,x2,...,xn,y1,y2,...,yn] 的格式排列。

请你将数组按 [x1,y1,x2,y2,...,xn,yn] 格式重新排列，输出重排后的数组。


int main()
{	
	int a[20];
	int i,j,n;
	int b[20];
	j=0;
	scanf("%d",&n);

	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}

	for(i=0;i<n/2;i++)
	{
		b[j++]=a[i];
		b[j++]=a[n/2+i];
	}
		for(j=0;j<n;j++)
		{
			printf("%d\t",b[j]);

		}
	return 0;
}


