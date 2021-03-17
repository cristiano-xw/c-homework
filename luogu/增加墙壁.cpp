#include<iostream>
using namespace std;
typedef long long ll;
int dx[] = {0, -1, 1, 0, 0}, dy[] = {0, 0, 0, -1, 1}, visit[510][510];
char w[510][510];
int n, m, k, p;
inline bool ok(int x, int y)
{
	return x >= 1 && x <= n && y >= 1 && y <= m && w[x][y] == 'X' && !visit[x][y]; 
}

inline void dfs(int x, int y)
{
	for(int i = 0; i < 5; ++i)
	{
		int px = x + dx[i], py = y + dy[i];
		if (ok(px, py) && p) --p, w[px][py] = '.', dfs(px, py);
	}
	visit[x][y] = 1;
}

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	cin>>n>>m>>k;
	for(int i = 1; i <= n; i++)
		for(int j = 1; j <= m; j++)
		{
			cin>>w[i][j];
			if (w[i][j] == '.') w[i][j] = 'X', p++; // p��'X'�ĸ��� 
		}
	p-=k; // ���ڵ�p��Ҫ�ߵĸ���
	
	for(int i = 1; i <= n; i++)
		for(int j = 1; j <= m; j++)
			if (w[i][j] == 'X') // ����Ҹ���dfs 
			{
				dfs(i, j);break;
			}  
				
				
	for(int i = 1; i <= n; i++)
	{
		for(int j = 1; j <= m; j++)
			cout<<w[i][j];
		cout<<'\n';
	}
	return 0;
}

