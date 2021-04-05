#include<bits/stdc++.h>
#include<queue>
using namespace std;
const int M=100008;

int group[M];
queue<int>q,s[333];
//建立两个数组 q负责存放元素的组别
//s负责存放某一特定小组的元素 
int n=0; int m=0;
int t=0;
int main()
{
	cin>>n; cin>>m;//人数和小组个数
	for(int i=0;i<n;i++)
	{
		cin>>group[i];//读入元素组别 
	} 
	cin>>t;
	
	for(int i=1;i<=t;i++)
	{
		string v;
		cin>>v;
		if(v=="push")
		{
			int g=0;
			cin>>g;//读入元素
			if(s[group[g]].empty()==0)// 这一种小组暂时无法找到
			{
				q.push(group[g]);//加进去 相当于是小组的排序 
			} 
			s[group[g]].push(g);//将这一个元素加入该元素的队列 
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

