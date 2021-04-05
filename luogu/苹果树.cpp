#include <iostream>
#include <cstdio>
#include <vector>
using namespace std;

vector <int> son[109];
int  n,q;
int f[109][109],val[109][109],used[109];

void dfs(int x)
{
	used[x]=1;//��ֹ��ѭ�����ı��		
	for(int i=0;i<son[x].size();i++)
	{    
		int ny=son[x][i];
		if(used[ny]==1)	continue;	//�����ǹ�������������ĸ��ڵ㣬ֱ������
		used[ny]=1;
		dfs(ny);
		for(int j=q;j>=1;j--)
		{
			for(int k=j-1;k>=0;k--)
			{
				f[x][j]=max(f[x][j],val[x][ny]+f[ny][k]+f[x][j-k-1]);
			}
		}
	}
}

int main(){
	scanf("%d%d",&n,&q);
	for(int i=1;i<n;i++){
		int a,b,c;
		scanf("%d%d%d",&a,&b,&c);
		val[a][b]=c;//��Ϊ��֪����ϵ������μ�ֵ����ֻ���õ�һ����
		val[b][a]=c;
		son[a].push_back(b);
		son[b].push_back(a);
	}
	dfs(1);
	printf("%d",f[1][q]);
	return 0;
}
