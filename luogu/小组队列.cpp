#include<bits/stdc++.h>
#include<queue>
using namespace std;
const int M=100008;

int group[M];
queue<int>q,s[333];
//������������ q������Ԫ�ص����
//s������ĳһ�ض�С���Ԫ�� 
int n=0; int m=0;
int t=0;
int main()
{
	cin>>n; cin>>m;//������С�����
	for(int i=0;i<n;i++)
	{
		cin>>group[i];//����Ԫ����� 
	} 
	cin>>t;
	
	for(int i=1;i<=t;i++)
	{
		string v;
		cin>>v;
		if(v=="push")
		{
			int g=0;
			cin>>g;//����Ԫ��
			if(s[group[g]].empty()==0)// ��һ��С����ʱ�޷��ҵ�
			{
				q.push(group[g]);//�ӽ�ȥ �൱����С������� 
			} 
			s[group[g]].push(g);//����һ��Ԫ�ؼ����Ԫ�صĶ��� 
		}
		
		else
		{
			cout<<s[q.front()].front()<<endl;
			s[q.front()].pop();
			if(s[q.front()].empty()==1)
			{
				q.pop();
			}
		}
	}
	return 0;
}

