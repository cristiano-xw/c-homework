#include <iostream>
using namespace std;
int f[100010],a,b,p,ans;
int find(int x)
{
	return x==f[x]?x:f[x]=find(f[x]);
}
bool np[100010];
int main()
{
	int i,j;
	cin>>a>>b>>p;                              
	ans=b-a+1; //���𰸳�ʼ��Ϊa~b�����ĸ�����ÿ�ϲ�һ�μ�1�Ϳ�����
	
	for (i=a;i<=b;++i)
	{
		f[i]=i;
	}
	
	for (i=2;i<=b;++i) //����ɸ
	{
		if (!np[i])
		{
			if (i>=p) //�����ǰ��������p�źϲ�
			{
				for (j=i*2;j<=b;j+=i)
				{
					np[j]=true;
					if (j-i>=a&&find(j)!=find(j-i)) //����ǰ��ɸ��������һ����ɸ�����ϲ�����һ����ɸ����������������ϲ�����ע������������Ҫ��a~b֮��źϲ�
					{
						f[find(j)]=find(j-i);
						--ans;
					}
				}
			}
			else
			{
				for (j=i*2;j<=b;j+=i)
				{
					np[j]=true;
				}
			}
		}
	}
	cout<<ans;
	return 0;
} 
