#include<bits/stdc++.h>
using namespace std;
int main()
{
	int q[111112];//����ÿһ�����ݵ����ֵ
	int s[111112];//����ÿһ�����ݵĴ�С
	int ans=1111111111;
	int f[111112];//�����ʼ����;
	memset(q,0,sizeof(q));
	memset(s,0,sizeof(s));
	memset(f,0,sizeof(s));
	
	int i=0;
	int n=0; cin>>n;
	for(i=1;i<=n;i++)
	{
		cin>>f[i];
	} 
	
	sort(f+1,f+n+1);
	
	int top=0;//��ʾ��������洢�˼����� 
	for(i=1;i<=n;i++)
	{
	   int pos=lower_bound(q+1,q+top+1,f[i]-1)-q; //���Һ�f[i]-1��ȵ�������һ�� 
	   while(q[pos+1]==(f[i]-1)&&pos<top) 
	   pos++; //һֱ�ҵ���ȵ����һ��
	    
	   if(pos>top||q[pos]!=f[i]-1)
	   {
	   	top++;
	   	q[top]=f[i]; s[top]++;
	   }
	   else
	   {
	   	q[pos]++; s[pos]++;
	   }
	}
	
	for(i=1;i<=top;i++)
	{
		ans=min(ans,s[i]);
	}
	cout<<ans;
	return 0;	
}
