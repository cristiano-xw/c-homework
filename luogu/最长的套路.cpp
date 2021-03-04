#include<bits/stdc++.h>
using namespace std;
int main()
{
    int dis[50001],w[50001];
	int n=0; int m=0; int minn=0;
	int f[55555][3];
                 
    cin>>n>>m;
   for(int i=1;i<=m;i++){
        dis[i]=w[i]=-100000000;
        f[i][1]=f[i][2]=0;
    }
    
    for(int i=1;i<=m;i++)
	{
        int a,b,c;
        cin>>a>>b>>c;
        f[i][1]=a;f[i][2]=b;w[i]=c;
    } 
    
    dis[1]=0;
    for(int i=1;i<=n-1;i++)
	{   
        for(int j=1;j<=m;j++)
		{
            dis[f[j][2]]=max(dis[f[j][2]],dis[f[j][1]]+w[j]);  
        }
    }
    
    if(dis[n]!=0)
    printf("%d",dis[n]);
    
    else cout<<"-1";
    return 0;
}
