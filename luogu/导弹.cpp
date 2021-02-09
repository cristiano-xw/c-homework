#include<bits/stdc++.h>

using namespace std;
int n,ans1,ans2,f[100001],a[100001];

int main()
{
	int i=1;
	while(scanf("%d",&a[i])!=EOF)
	{
		i++;
	}
	n=i-1;
	
	for(int i=n;i>=1;i--)
	{//注意！！因为它是以i开头的最长不上升子序列，所以这里要从n开始循环，不然会出现一些奇妙的bug 
		f[i]=1;//以第i个数开头的最长不上升子序列的长度至少为1（当这个序列只有它本身这一个数） 
		for(int j=i+1;j<=n;j++){//用前面已经算好的来算现在正在算的这一个 
			if(a[j]<=a[i])//如果a[j]>a[i]的话就不满足不上升这个要求（毕竟a[j]在a[i]后面） 
				f[i]=max(f[i],f[j]+1); //更新f[i]~记得要+1啊 
		}
		ans1=max(ans1,f[i]);//更新ans1 
	}
	
	
	for(int i=1;i<=n;i++){//同上，因为它是以i结尾的最长上升子序列，所以这里要从前往后，不然会出现一些奇妙的bug
		f[i]=1;//以第i个数结尾的最长上升子序列的长度至少为1（当这个序列只有它本身这一个数） 
		for(int j=1;j<i;j++){
			if(a[j]<a[i]) 
				f[i]=max(f[i],f[j]+1);//更新f[i]~记得要+1啊 
		}
		ans2=max(ans2,f[i]);//更新ans2 
	}
	printf("%d\n%d\n",ans1,ans2);
}
