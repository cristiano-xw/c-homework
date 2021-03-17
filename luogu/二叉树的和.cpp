#include<bits/stdc++.h>
using namespace std;
int lc[10005]; int rc[10005];
int midd[10005]; int endd[10005];
int n=0;//�ֱ��ʾÿ��������ĳ��� 
int ans=0; int minn=0x7fffffff;

int build(int l1,int r1,int l2,int r2)
{
	if(r1<l1) //��������ײ�Ľڵ�
	return -1;
	
	    //cout<<"ol";
		int root=endd[r2];
		int p=l1;
		while(midd[p]!=root) p++;
		int cnt=p-l1;//���ƫ���� 
		lc[root]=build(l1,p-1,l2,l2+cnt-1);
		rc[root]=build(p+1,r1,l2+cnt,r2-1);
		return root; 
}


void dfs(int s,int sum)
{
	//cout<<"ok";
	sum+=s;//���
	if(lc[s]==-1&&rc[s]==-1)
	{
		if(sum<minn||(sum==minn&&s<ans))
		{
			minn=sum;
			ans=s;
		}
	} 
	
	if(lc[s]!=-1) dfs(lc[s],sum);
	if(rc[s]!=-1) dfs(rc[s],sum);
}


int main()
{
	int a=0; char t;
	while(scanf("%d%c",&a,&t)!=EOF)
	{
		n=1;
		midd[1]=a;
		while(t!='\n') scanf("%d%c",&midd[++n],&t);
		for(int i=1;i<=n;i++)
		{
			scanf("%d",&endd[i]);
		}
		//cout<<" "<<n;
		build(1,n,1,n);//Ѱ���ӽڵ㲢�ҽ��м�¼
		dfs(endd[n],0);//���׽ڵ㿪ʼ����
		cout<<ans<<endl;
		
		memset(lc,0,sizeof(lc));
		memset(rc,0,sizeof(rc));
		memset(midd,0,sizeof(midd));
		memset(endd,0,sizeof(endd));
		minn=0x7fffffff;
	}
	return 0;
}
