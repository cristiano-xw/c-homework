#include<bits/stdc++.h>
using namespace std;
struct node
{
	int g; int ti;//�ֱ��ǹ������ϴ�ʱ�� 
}h;

queue<node>q;//�������
int ans=0; int a[111111];//����� 
int main()
{
	memset(a,0,sizeof(a));
	int i=0;int n=0; int m=0; int t=0;int j=0;
	cin>>n;//һ����n�Ҵ�
	for(i=1;i<=n;i++)
	{   
	    cin>>t>>m;
		while(q.empty()==0)
		{
			node w=q.front();
			if(w.ti+86400<=t)//���׳�����Χ�� 
			{
				a[w.g]--;
				if(a[w.g]==0)
				{
					ans--;
				}
				q.pop();//���º�
				continue; 
			}
			break;
		}
		for(j=1;j<=m;j++)
		{
			int x=0;
			cin>>x;
			h.g=x;h.ti=t;
			q.push(h);//�������
			a[x]++;
			if(a[x]==1)
			{
				ans++;
			 } 
		}
		
		printf("%d\n",ans);
	} 
    return 0;
} 
