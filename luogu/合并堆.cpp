#include<bits/stdc++.h>
#include<queue>
//���ȶ��� 
using namespace std;
int main()
{
	int n=0;
	int s=0; int ans=0;
	cin>>n;
    int a=0;
	priority_queue<int,vector<int>,greater<int> >q;
	int i=1;
	for(i=1;i<=n;i++)
	{
		cin>>a;
		q.push(a);//��aѹ�����
	}
	
	for(i=1;i<n;i++)//ÿ��s���ڶѵ�ǰ����Ԫ������֮�� 
	{
		s=q.top();
		q.pop();
		s+=q.top();
		q.pop();
		ans+=s;
		q.push(s);
	}
	
	cout<<ans;
	return 0;
}
