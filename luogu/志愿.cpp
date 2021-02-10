#include<bits/stdc++.h> 
using namespace std;//名字空间
int a[100100],b[100100];//定义两个数组，分别储存每个学校的分数线，和每个同学的估分
int main()//主函数
{
	int n,m;//定义n,m
	cin>>n>>m;//输入
	for(int i=1; i<=n; i++)
	{
		cin>>a[i];//输入
	}
	for(int i=1; i<=m; i++)
	{
		cin>>b[i];//还是输入
	}
	
	sort(a+1,a+n+1);//把每个学校的分数线从小到大排序
	int ans=0;//答案一开始为0，因为要累加和。
	
	for(int i=1; i<=m; i++)
	{                                            
		int l=0,r=n;//定义左边界与右边界 
		while(l<=r)
		{
			int mid=(l+r)/2;//取查找范围的中间值
			if(a[mid]<=b[i])//如果录取分数线数组中的第mid个元素小于或等于那位同学的分数
			{
				l=mid+1;//左边界就往右移
			}
			else
			{
				r=mid-1;//右边界就往左移
			}
		}
		
		if(b[i]>=a[n])//这里需要特判断一下，不然只能得70分
		{
			ans+=b[i]-a[n]; 
		}
		else
		{
			ans+=min(abs(a[r]-b[i]),abs(a[r+1]-b[i]));//加上两个绝对值中最小 
		}
	}
	
	cout<<ans;//输出ans
	return 0;//结束程序
}
