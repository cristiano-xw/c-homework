#include<bits/stdc++.h>
using namespace std;                     
int main(void)   
{  
    char a[100][100];
	int n=0; int m=0;
	cin>>n>>m;
	int i=1; int j=1;//此时开头为第一列第一行
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=m;j++)
		{
			scanf("%c",&a[i][j]); 
		}
	} 
	
	int k=1; int d=0;
	int t[100]={};
	memset(t,0,sizeof(t));
	
	int u=1;
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
			    		t[u]++;
					}
				}
			}
			
			for(k=i+1;k<=j;k++)
			{
			    for(d=1;d<=m;d++)
			    {
			    	if(a[k][d]!='B')
			    	{
			    		t[u]++;
					}
				}
			}
			
			for(k=j+1;k<=n;k++)
			{
			    for(d=1;d<=m;d++)
			    {
			    	if(a[k][d]!='R')
			    	{
			    		t[u]++;
					}
				}
				u++;
			}
		}
	}
	
	
	int min=1;
	
	for(u=1;u<=99;u++)
	{
		if(t[u]<t[min]&&t[u]!=0)
		{
			min=u;
		}
	}
	
	printf("%d\n",min);
	//printf("%d\n",t[1]);
	printf("%d",t[min]);
} 
