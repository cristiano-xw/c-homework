#include<bits/stdc++.h>
#include<set>
using namespace std;
set<int>s;//�������� 
set<int>::iterator a,b;//����������
int main()
{ 
    s.insert(19191919);
    s.insert(-23123123);//���������˿� 
	int n=0; int ans=0; int x=0;//�����������ÿ���������
	cin>>n;
	int i=0;
	for(i=1;i<=n;i++)
	{
		cin>>x;
		if(s.size()==2)
		{
			s.insert(x);
			ans+=x;//��ʼֵ 
		}
		else
		{
			a=s.lower_bound(x);
			if(*a!=x)//����x��������
			{
				b=a;
				b--;
				ans+=min(abs(*b-x),abs(*a-x));
				s.insert(x);
			} 
		}
	}
	cout<<ans;
	return 0; 
} 
