//�ܵ����Ϊÿһ�����ϵ�����ܳ˻����ܵĿ��Ϊÿһ�����ϵĿ�ȵ��ܺ͡�
#include<bits/stdc++.h>
using namespace std;
int a[11];int b[11];//�ֱ������ȺͿ�� 
int m=0;//��Сֵ 
int ans=19999999;//�м���� ����ת��
int n=0;

void dfs(int i,int x,int y)
{
	if(i>n)//�������
	{
		if(x==1&&y==0)
		{
			return;//�����е��� 
		}
		
		ans=min(ans,abs(x-y)); //���ϸ�����Сֵ 
	} 
	
	if(i<=n)
	{
		dfs(i+1,x*a[i],y+b[i]);
		dfs(i+1,x,y);
	}
}


int main(void)
{  
    
    scanf("%d",&n);
    int i=0;
    
    for(i=1;i<=n;i++)
    {
    	scanf("%d%d",&a[i],&b[i]);
	}
	
	dfs(1,1,0);//�ֱ����� �ӵ�һ�����鿪ʼ ��ȳ�ʼ��Ϊ1 ��ȳ�ʼ��Ϊ0
	
    printf("%d",ans);
    
    
    
	return 0;
} 
