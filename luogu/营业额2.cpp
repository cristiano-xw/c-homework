#include<bits/stdc++.h>
#include<set>
using namespace std;
set<int>s;//创建容器 
set<int>::iterator a,b;//创建迭代器
int main()
{ 
    s.insert(19191919);
    s.insert(-23123123);//创建两个端口 
	int n=0; int ans=0; int x=0;//总数，结果，每次输入的数
	cin>>n;
	int i=0;
	for(i=1;i<=n;i++)
	{
		cin>>x;
		if(s.size()==2)
		{
			s.insert(x);
			ans+=x;//初始值 
		}
		else
		{
			a=s.lower_bound(x);
			if(*a!=x)//等于x则不做操作
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
