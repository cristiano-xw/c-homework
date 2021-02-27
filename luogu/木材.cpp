#include<bits/stdc++.h>
#include<set>
using namespace std;
set <int> s;
int main()
{
	int n=0; int i=0;
	cin>>n;
	for(i=1;i<=n;i++)
	{
		int x=0; int y=0;
		cin>>x>>y;
	    if(x==1)//入库 
	    {
	    	if(s.find(y)==s.end())
	    	{
	    		s.insert(y);
			}
			else
			{
				cout<<"Already Exist"<<endl;
			}
		}
		
		if(x==2)
		{   
		    if(s.empty()==1)//容器是空的 
		    {
		    	cout<<"Empty"<<endl;
		    	continue;
			}
		    
			set<int>::iterator i,j;
			i=s.lower_bound(y);
			j=i;
			if(j!=s.begin())
			{
				j--;//找到比y小的数 
			}
			if(i!=s.end())
			{
				if(y-*j>*i-y)
				{
					j=i;
				}
			}
			cout<<*j<<endl;
			s.erase(j);//删除 
		}
	}
	return 0;
}
