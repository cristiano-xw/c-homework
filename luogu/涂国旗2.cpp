#include<bits/stdc++.h>
using namespace std;                     
int main(void)   
{  
    char a[100][100];
	int n=0; int m=0;
    scanf("%d%d",&n,&m);
	//getchar();
	int i=1; int j=1;//此时开头为第一列第一行
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=m;j++)
		{
		  cin>>a[i][j];
		}
		//getchar();
	} 
   
	
	int k=1; int d=0;
	int t=11110;
	int ans=0;
	
	int u=1;int x=1;
	for(i=1;i<=n-2;i++)
	{
		for(j=i+1;j<=n-1;j++)
		{
				
			for(k=1;k<=i;k++)
			{
			    for(d=1;d<=m;d++)
			    {
			    	if(a[k][d]!='W')
			    	{
			    		ans++;
					}
				}
			}
			
			for(k=i+1;k<=j;k++)
			{
			    for(d=1;d<=m;d++)
			    {
			    	if(a[k][d]!='B')
			    	{
			    		ans++;
					}
				}
			}
			
			for(k=j+1;k<=n;k++)
			{
				for(d=1;d<=m;d++)
			    {
			    	if(a[k][d]!='R') 
			    	{
			    		ans++;
					}
				}
			}
				
		   if(t>ans)
		   {
		   	t=ans;
		   }
		   ans=0;
		
	  }
	}
	
	cout<<t;
   
} 
