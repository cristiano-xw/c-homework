#include<bits/stdc++.h> 
using namespace std;//���ֿռ�
int a[100100],b[100100];//�����������飬�ֱ𴢴�ÿ��ѧУ�ķ����ߣ���ÿ��ͬѧ�Ĺ���
int main()//������
{
	int n,m;//����n,m
	cin>>n>>m;//����
	for(int i=1; i<=n; i++)
	{
		cin>>a[i];//����
	}
	for(int i=1; i<=m; i++)
	{
		cin>>b[i];//��������
	}
	
	sort(a+1,a+n+1);//��ÿ��ѧУ�ķ����ߴ�С��������
	int ans=0;//��һ��ʼΪ0����ΪҪ�ۼӺ͡�
	
	for(int i=1; i<=m; i++)
	{                                            
		int l=0,r=n;//������߽����ұ߽� 
		while(l<=r)
		{
			int mid=(l+r)/2;//ȡ���ҷ�Χ���м�ֵ
			if(a[mid]<=b[i])//���¼ȡ�����������еĵ�mid��Ԫ��С�ڻ������λͬѧ�ķ���
			{
				l=mid+1;//��߽��������
			}
			else
			{
				r=mid-1;//�ұ߽��������
			}
		}
		
		if(b[i]>=a[n])//������Ҫ���ж�һ�£���Ȼֻ�ܵ�70��
		{
			ans+=b[i]-a[n]; 
		}
		else
		{
			ans+=min(abs(a[r]-b[i]),abs(a[r+1]-b[i]));//������������ֵ����С 
		}
	}
	
	cout<<ans;//���ans
	return 0;//��������
}
