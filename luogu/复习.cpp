#include<bits/stdc++.h>
using namespace std;
int l,r,minn,total;
int a[100][100];

void search(int x,int y,int m)
{
	if(y>m)
	{
		minn=min(minn,max(l,r));
		return;  
	}
	
	l+=a[x][y];
	search(x,y+1,m);
	l-=a[x][y];
	
	r+=a[x][y];
	search(x,y+1,m);
	r-=a[x][y];
}

int main()
{
	int i=0;
	int s[5];
	cin>>s[1]>>s[2]>>s[3]>>s[4];
	for(i=1;i<=4;i++)
	{ 
		minn=19999;
		for(int j=1;j<=s[i];j++)
		cin>>a[i][j]; 
	}
	
	for(i=1;i<=4;i++)
	{  
	    l=r=0;
		search(i,1,s[i]);
		total+=minn;
		minn=19999;
	}
	
	cout<<total;
	return 0;
}
