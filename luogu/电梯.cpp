//��Ȼ�ǿɰ��Ĺ������
#include<bits/stdc++.h>
#include<queue>
using namespace std;
int main(void)
{
	int n=0; int a=0; int b=0;
	scanf("%d%d%d",&n,&a,&b);
	
	int d[300];
	int v[300];
	memset(v,0,sizeof(v));//v�Ǳ������ ����Ƿ�����
	
	int i=1;//�ӵ�һ��¥��ʼ
	for(i=1;i<=n;i++)
	{
		scanf("%d",&d[i]);   //����ÿ��¥������ 
	} 
	
	//��������
	queue<int>h;// ��ʾ¥��
	queue<int>t;//��ʾ����
	h.push(a); t.push(0);
	
	
	while(h.empty()==0) 
	{ 
		if(h.front()==b)
		{
			printf("%d",t.front());
			return 0;//�������� 
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
		
	    h.pop(); t.pop();//�Ƴ�����Ԫ�� ������һ��Ԫ��	 
	} 
	
	printf("-1");
	return 0;
	
}
 
