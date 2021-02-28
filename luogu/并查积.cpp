#include<bits/stdc++.h>
using namespace std;
int fa[10010];

int find(int k)
{
    if(fa[k]==k)return k;
    return fa[k]=find(fa[k]);
}

int main()
{
	int i=0; int j=0; int n=0; int m=0;
    cin>>n>>m;
    for(i=1;i<=n;i++)
        fa[i]=i;
        
    for(i=1;i<=m;i++)
	{
		int k=0; int x=0; int y=0;
        cin>>k>>x>>y;
        if(k==1)
            fa[find(x)]=find(y);
            
        else
            if(find(x)==find(y))
                cout<<"Y"<<endl; 
            else
                cout<<"N"<<endl;
    }
    return 0;
}
