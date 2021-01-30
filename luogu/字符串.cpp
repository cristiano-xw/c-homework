#include<bits/stdc++.h>
#include<queue>
using namespace std;
map<string,int>mp;

int main(void)
{
	string a,b;
	cin>>a>>b;
	string x[10],y[10];
	int n=0;  int i=1; int j=0;
	
	while(cin>>x[i]>>y[i])
	{
		i++;
	}
	i--;
	n=i;//一共有n组数据
	
	queue<string>q;//表示当前字符 
	queue<int>t;//表示次数
	q.push(a); t.push(0);//从字符a开始 首先次数为0
	
	while(q.empty()==0) 
	{
		if(q.front()==b)
		{ 
			cout<<t.front();
			return 0;
		}
		
		if(t.front()>10)//超过十次
		{
			q.pop(); t.pop();
		}
		
		string k=q.front();//将第一个string替换 
		
		if(mp.count(k))
		{
			q.pop();t.pop();
			continue; 
		}
		
		mp[k]=1;//出现了
		
		
	 
			for(i=1;i<=n;i++)
			{
			 	int p=0;
			 	
			 	while(k.find(x[i],p)!=k.npos) 
	            { 
			 	p=k.find(x[i],p);//必须不可以改变前面的值                            
					q.push(k.substr(0,p)+y[i]+k.substr(p+x[i].length()));
					t.push(t.front()+1);
					p++;
			 
			    } 
			}
			
		 
		
		q.pop();t.pop();	
	} 
	
	printf("NO ANSWER!");
	return 0;
	 
}
