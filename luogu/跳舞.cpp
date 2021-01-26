//每一点向下或者向右遍历
#include<bits/stdc++.h>
using namespace std;
int main(void)
{
	char a[1111][1111];
	int r=0;int c=0; int k=0;
	scanf("%d%d%d",&r,&c,&k);
	int i=0; int j=0;
	
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			cin>>a[i][j];
		 } 
	}
	
	int ans=0;
 
	for(i=0;i<r;i++)
	{   
	    int t=0;
		for(j=0;j<=c-k;j++)  
		{
			while(a[i][j]=='.')
			{
				t++;
				j++;
			if(k==t) 
			{
				ans++;
				j=j-k;
				break;
			}
			}
			t=0;
		}
	}
	
	
	for(j=0;j<c;j++)
	{   
	    int t=0;
		for(i=0;i<=r-k;i++)
		{
			while(a[i][j]=='.') 
			{   
			   t++;
			   i++;
			   if(k==t) 
			{
				ans++;
				i=i-k;
				break;
			}
			}
			t=0;
		}
	}  
	
	
	printf("%d",ans);
	return 0;
	
}
