#include<bits/stdc++.h>
using namespace std;
int m=0; int n=0; int ans=0;//结果 
int a[111111]={}; int b[111111]={};
int main()
{
	scanf("%d%d",&m,&n);
	int i=0;
	for(i=1;i<=m;i++)
	{
		scanf("%d",&a[i]);//学校的分数线 
	}
	
	for(i=1;i<=n;i++)
	{
		scanf("%d",&b[i]);//估分 
	}
	
	sort(a+1,a+m+1);//对学校的分数线进行排序 
	
	for(i=1;i<=n;i++)// 分别找出n位学生最适合的方案 
	{
		int l=0; int r=m;//初始化左值和右值 
		while(l<=r)
		{
			int mid=(l+r)/2;
			if(a[mid]<b[i])
			{
				l=mid+1;
			}
			else
			{
				r=mid-1;
			}
		} 
		
		if(b[i]<=a[1])
		{
			ans+=abs(b[i]-a[1]); 
		}
		
		else
		{
			ans+=min(abs(b[i]-a[l]),abs(b[i]-a[l-1])); 
		}
	}
	
	cout<<ans;
	return 0;
}
