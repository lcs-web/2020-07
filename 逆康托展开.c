逆康托展开和康托展开相反，康托展开求一个数在全排列中的位置，
逆康托是求全排列某一位置的数


#include<iostream>

#include<cstdio>

using namespace std;

 

int fac[20]; //阶乘 

void init()

{ 

	fac[0]=fac[1]=1;

	for(int i=2;i<=20;i++)

	{

		fac[i]=i*fac[i-1];

	}

} //阶乘预处理 

 

void ni_kang_tuo(int num[],int n,int m)

{

	int k=m-1,vis[20]={0};

	for(int i=1;i<=n;i++)

	{

		int j,cnt=k/fac[n-i];

		for(j=1;j<=n;j++)

	      if(!vis[j])

	      {

	         cnt--;

	         if(cnt<0)

	          break;

	      }

		vis[j]=1;

		num[i]=j;

		k%=fac[n-i];

	}

}

 

int main()

{

	init();

	int n,m,num[20];

	while(~scanf("%d %d",&n,&m))

	{

		ni_kang_tuo(num,n,m);

		for(int i=1;i<=n;i++) 

	     printf("%d ",num[i]);

	    putchar('\n');

	}

	return 0;

} 
