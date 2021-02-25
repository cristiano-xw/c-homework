#include<bits/stdc++.h>
#include<set>
using namespace std;
multiset<int>q;//创建容器

int main()
{
	q.insert(2147483647);
	q.insert(-2147483647);//先将上限和下限读入
	
	int n=0; int i=0; int ans=0; 
    cin>>n;
    for(i=1;i<=n;i++)
    {
    	int k=0; int x=0;
		cin>>k>>x;
		
		if(k==1)
		{
			multiset<int>::iterator it =q.lower_bound(x); //找到位置 
			ans=0; 
			multiset<int>::iterator j=q.begin();
			for(j=q.begin();j!=it;j++)
			{
				ans++;
			}
			cout<<ans<<endl;
		} 
		
		if(k==2)
		{
			ans=-1;
			multiset<int>::iterator it=q.begin();
			for(it=q.begin();it!=q.end();it++)
			{
				ans++;
				if(ans==x)
				{
					printf("%d\n",*it);
				}
			}
		}
		
		if(k==3)
		{
			multiset<int>::iterator it =q.lower_bound(x);
			printf("%d\n",*--it);
		}
		
		if(k==4)
		{
			multiset<int>::iterator it=q.upper_bound(x);
			printf("%d\n",*it);
		}
		
		if(k==5)
		{
			q.insert(x);
		}
	}
	 return 0;
} 

