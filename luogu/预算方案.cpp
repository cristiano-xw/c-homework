#include<bits/stdc++.h>
using namespace std;
int dp[33333];
struct bag
{
	int tot;//��ʾ�����һ�������
	int w[5];//��������ֱ��Ӧ������
	int v[5];//��������ֱ��Ӧ�ļ�ֵ 
}a[77];

int main()
{  
    
    memset(dp,0,sizeof(dp));
	int n=0; int m=0;
	scanf("%d%d",&n,&m);//n��ʾǮ m��ʾһ����m����Ʒ
	
	int i=0; int j=0;
	for(i=0;i<=m;i++)
	{
		a[i].tot=0;//��ʼ��
		memset(a[i].v,0,sizeof(a[i].v));
		memset(a[i].w,0,sizeof(a[i].w)); 
	}
	
	int x=0; int y=0; int z=0; //�۸���Ҫ�ȣ����� 
	for(i=1;i<=m;i++)//������Ʒ 
	{
		cin>>x>>y>>z;
		if(z==0)
		{
			a[i].tot=1;
			a[i].w[1]=x;
			a[i].v[1]=x*y;
		}
		
		else
		{
		if(a[z].tot==1)//��ʱֻ������
		{
			a[z].tot=2;
			a[z].w[2]=a[z].w[1]+x;
			a[z].v[2]=a[z].v[1]+x*y;
		} 
		else//����һ�������͸���
		{   
		    a[z].tot=4;
			a[z].w[3]=a[z].w[1]+x;
			a[z].v[3]=a[z].v[1]+x*y;//����������һ������
			a[z].w[4]=a[z].w[2]+x;
			a[z].v[4]=a[z].v[2]+x*y;//�������������� 
		} 
	    }
	}
	
	int k=0;
	for(i=1;i<=m;i++)
	{
		if(a[i].tot==0)
		{
			continue;
		}
		
		for(j=n;j>=0;j--)
		{
			for(k=1;k<=a[i].tot;k++)//һ��������ѡȡһ�� 
			{
				 if(j>=a[i].w[k]) 
				 {
				 	dp[j]=max(dp[j],dp[j-a[i].w[k]]+a[i].v[k]);
				 }
			}
		}
	}
	cout<<dp[n];
	return 0;
}
