#include<bits/stdc++.h>
using namespace std;
int s[1005][1005];//��ʾ����һ���ļ���ǿ��ǰ��һ�� 
int a[1005];//������� 
int c[1005];//���복վ 
bool vis[1005];//����������
bool b[1005];
int main()
{
	int n=0; int m=0;
	int i=0; int j=0;
	cin>>n>>m;
	for(i=1;i<=m;i++)//ÿһ�鶼Ҫ���¶��복վ,������ԵĴ�С��ϵ������ 
	{
		memset(c,0,sizeof(c));
		memset(vis,0,sizeof(vis));
		int t=0; cin>>t;
		for(j=1;j<=t;j++)
		{
			cin>>c[j]; vis[c[j]]=1;//���ֹ�  
		}
		for(j=c[1];j<=c[t];j++)
		{
			if(vis[j]==0)//û�г��ֹ�
			{
				for(int k=1;k<=t;k++)
				{
					if(s[j][c[k]]==0)
					{
						s[j][c[k]]=1;//����ǿ����ϵ
						a[c[k]]++; 
					}
				}
			} 
		}
	}
	
	memset(b,0,sizeof(b));//��ǵײ�����
	int th[1005];
	memset(th,0,sizeof(th));
	int ans=0;
	int tot=0;
	do
	{
	    tot=0;
		for(i=1;i<=n;i++)
		{
			if(a[i]==0&&b[i]==0)
			{
				th[++tot]=i; b[i]=1;//�������еĵײ㳵վ 
			}
		} 
		
		for(i=1;i<=tot;i++)
		{
			for(j=1;j<=n;j++)
			{
				if(s[th[i]][j]==1) 
				{
					s[th[i]][j]=0; a[j]--;   //��������  
				}
			}
		}
		ans++;
	}while(tot);
	
	ans--;
	cout<<ans;
	return 0; 
	
} 
