//����������
#include<bits/stdc++.h>
using namespace std;
int v[260]; int w[260];//�ֱ�������ֵ�ͱ��
int n;
void dfs(int x)
{
     if(x>=pow(2,n))
	 return;//�������ӽڵ㷵�� 
	 
	 else
	 {
	 	dfs(2*x);
	 	dfs(2*x+1);//������������
		int lv=v[2*x]; int rv=v[2*x+1];
		if(lv>rv)      
		{
			v[x]=lv;
			w[x]=w[2*x];
		} 
		else
		{
			v[x]=rv;
			w[x]=w[2*x+1];
		}
	 }	
}	

int main()
{
	cin>>n; int i=0;
	for(i=0;i<pow(2,n);i++)
	{
		cin>>v[i+(int)pow(2,n)];//�����ӽڵ��ֵ
		w[i+(int)pow(2,n)]=i+1;//ÿ���ӽڵ�����Ӧ�ı�� 
	}
	dfs(1);
	if(v[2]>v[3])
	{
		cout<<w[3];
	}
	else
	cout<<w[2];
	return 0;
}
