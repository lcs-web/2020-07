康托展开

#include<stdio.h>、
#define Max 100
 //求阶乘
int factorial_function(int num)
{	if(num <= 1)
		return 1;
	else		
		return (factorial_function(num-1)*num);}
 int main()
 {
	int num[Max];
	char s[Max];
	int i=0,j=0,k=0,count=0;
	char val;
	int sum = 0;
	while(scanf("%c",&val))
	{
		if(val == '\n')
				
			break;

		else
		{	
			s[count] = val;
				count ++;
		}
	} 	
	printf("count = %d\n",count); 	
	for(i=0;i<count;i++)
	{		
		printf("*************************%c************************\n",s[i]);
		for(j=i+1;j<count;j++)
		{			if(s[i]>s[j])
		{				printf("%d: %c\t%c\n",j,s[i],s[j]);
		k ++;			}
	}
		printf("%d\n",k);
		num[i] = k;
		k = 0;
	}
	for(j=count-1;j>=0;j--)
	{
		sum += factorial_function(j) * num[k];
		printf("%d:%d = %d*%d\n",k,sum,factorial_function(j),num[k]);
		k++;
	}
	printf("是第%d大数\n",sum+1);
	return 0;
 } 
