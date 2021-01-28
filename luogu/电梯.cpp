//依然是可爱的广度搜索
#include<bits/stdc++.h>
#include<queue>
using namespace std;
int main(void)
{
	int n=0; int a=0; int b=0;
	scanf("%d%d%d",&n,&a,&b);
	
	int d[300];
	int v[300];
	memset(v,0,sizeof(v));//v是标记数组 标记是否来过
	
	int i=1;//从第一层楼开始
	for(i=1;i<=n;i++)
	{
		scanf("%d",&d[i]);   //读入每层楼的数字 
	} 
	
	//创建队列
	queue<int>h;// 表示楼层
	queue<int>t;//表示次数
	h.push(a); t.push(0);
	
	
	while(h.empty()==0) 
	{ 
		if(h.front()==b)
		{
			printf("%d",t.front());
			return 0;//结束广搜 
		}
		
		int g=h.front()+d[h.front()];
		
		if(g<=n&&v[g]==0)
		{
			h.push(g);
			t.push(t.front()+1);
			v[g]=1;
		}
		
		g=h.front()-d[h.front()];
		
		if(g>=1&&v[g]==0)
		{
			h.push(g);
			t.push(t.front()+1);
			v[g]=1;
		}
		
	    h.pop(); t.pop();//推出队首元素 进入下一个元素	 
	} 
	
	printf("-1");
	return 0;
	
}
 
