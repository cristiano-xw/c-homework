#include<bits/stdc++.h>
using namespace std;
int m=0; int n=0; int ans=0;//��� 
int a[111111]={}; int b[111111]={};
int main()
{
	scanf("%d%d",&m,&n);
	int i=0;
	for(i=1;i<=m;i++)
	{
		scanf("%d",&a[i]);//ѧУ�ķ����� 
	}
	
	for(i=1;i<=n;i++)
	{
		scanf("%d",&b[i]);//���� 
	}
	
	sort(a+1,a+m+1);//��ѧУ�ķ����߽������� 
	
	for(i=1;i<=n;i++)// �ֱ��ҳ�nλѧ�����ʺϵķ��� 
	{
		int l=0; int r=m;//��ʼ����ֵ����ֵ 
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
