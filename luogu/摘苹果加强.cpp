#include<bits/stdc++.h>
using namespace std;
struct apple
{
	int x;
	int y;//�߶Ⱥ����� 
}q[5555];

bool cmp(apple i, apple j)
{
	return i.y<j.y;
}

int main()
{
	int n=0; int s=0;
	cin>>n>>s;
	int a=0; int b=0;//���Ӹ߶Ⱥ�������󳤶�
	cin>>a>>b;
	int d=0;
	d=a+b;
	if(d<=0)
	{ 
	    cout<<"0";
		return 0;
	}
	
	int i=0;
	for(i=1;i<=n;i++)
	{
		cin>>q[i].x>>q[i].y;
	}
	
	
	sort(q+1,q+n+1,cmp);//���� 
	
	int ans=0;
	
	i=1;
	
	while(s>=0) 
	{ 
		if(q[i].x<=d)
		{
			s=s-q[i].y;  
			if(s>=0)
			{
				ans++;
			}
		}
		i++;
	} 
	
	cout<<ans;
	return 0;
}
