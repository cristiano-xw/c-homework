#include<bits/stdc++.h>
using namespace std;
int a[50050];
int  l=0,m=0,n=0;
int main() 
{
	int i=0;
	int res=0;
	cin>>l>>n>>m;
	
	for(i=1;i<=n;i++)
	{
		cin>>a[i];
	}
	
	int left=0; int right=l; 
	int mid=0;
	
	while(left<=right) 
	{   
	    int sum=0;//�м������¼ 
		mid=(left+right)/2; 
		int now=0;//����㿪ʼ 
		
		for(i=1;i<=n;i++)
		{         
			if(a[i]-a[now]>=mid)
			{
				now=i;
			}
			
			else
			{   
				sum++;
			}
		} 
		
		if(sum>m) 
		{
			right=mid-1;
		}
		else
		{
			left=mid+1;  //ȡ��Сֵ��ô��sum<=mӦ���еȺ� 
			res=mid;
		}
	}
	cout<<res;
	return 0;
	
}
