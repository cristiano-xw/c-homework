#include<bits/stdc++.h>
using namespace std;
int vis[555]={0};
struct node{int dis,nex;}f;
vector<node>mapp[505];//����vector��ͼ
int flag=0;
int sum[505];

void spfa(int k)//��k��Ϊ��� 
{    
    
	if(vis[k]==1) {flag=1;vis[k]=0;return;}
	vis[k]=1;
	//cout<<"ok";
	
	if(mapp[k].empty()==0)
	{ 
	for(int i=0;i<mapp[k].size();i++)
	{
		if(sum[mapp[k][i].nex]>mapp[k][i].dis+sum[k])
		{
			sum[mapp[k][i].nex]=mapp[k][i].dis+sum[k];
			spfa(mapp[k][i].nex);
		}
	}
    }
    
	vis[k]=0;
}

int main()
{
	int T=0;
	cin>>T;
	while(T--)
	{
		int n=0; int m=0; int w=0;//�ֱ����ũ��ĸ��� nn��С·������ mm���Լ��涴�ĸ��� ww
		scanf("%d%d%d",&n,&m,&w);
		for(int i=1;i<=n;i++) mapp[i].clear();
		for(int i=1;i<=m;i++)
		{
			int x=0; int y=0; int z=0;//ÿ���������ÿո���������� x, y, z,
			//������һ������ x �� y ��С·��
			//��������·��Ҫ���� z ��ʱ��
			scanf("%d%d%d",&x,&y,&z);
			f.dis=z;f.nex=y;
			mapp[x].push_back(f);//��ʾx����������һ����
			f.nex=x;
			mapp[y].push_back(f);//����˫���
		}
		
		for(int i=1;i<=w;i++)
		{
			int x=0; int y=0; int z=0;
			scanf("%d%d%d",&x,&y,&z);
			f.dis=-z; f.nex=y;
			mapp[x].push_back(f);       
		}
		
		flag=0;
	    memset(sum,0,sizeof(sum));
	    
		for(int i=1;i<=n;i++)
		{   
		    //sum[i]=0;
			spfa(i);
			if(flag==1) break;
		}
		
		if(flag==1) cout<<"YES\n";
		else cout<<"NO\n";
		
	}
	return 0;
} 
