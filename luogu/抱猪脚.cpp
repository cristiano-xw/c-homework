#include<bits/stdc++.h>
using namespace std;
int l,r,minn,total;
int s[5];
int a[21][5];
void search(int x,int y)
{
	if(x>s[y]){
		minn=min(minn,max(l,r));
		return;
	}
	l+=a[x][y];
	search(x+1,y);
	l-=a[x][y];
	r+=a[x][y];
	search(x+1,y);
	r-=a[x][y];//毫无技巧的搜索回溯
}
int main()
{
	cin>>s[1]>>s[2]>>s[3]>>s[4];
	int i=0;
	for(i=1;i<=4;i++)
	{
		l=r=0;
		minn=19260817;
		for(int j=1;j<=s[i];j++)
			cin>>a[j][i];
	}
	
	for(i=1;i<=4;i++)
	{
		search(1,i);
		total+=minn;
		minn=19999;
	}
	
	cout<<total;
	return 0;
}
