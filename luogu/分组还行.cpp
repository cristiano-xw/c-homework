#include<bits/stdc++.h>
using namespace std;
const int MAXN=1e5+40;
int f[MAXN],n,ans=1e9;
int s[MAXN],q[MAXN];//�ֱ��ʾ�������е����ֵ������ֵ�ĸ��� 
signed main()
{   
    int top=0;
	memset(s,0,sizeof(s));
	memset(q,0,sizeof(q));
	
	scanf("%d",&n);
	for(int i=1;i<=n;i++) 
	scanf("%d",&f[i]);
	                          
	sort(f+1,f+n+1);
	      
	for(int i=1;i<=n;i++)
	{  
		int pos=lower_bound(q+1,q+top+1,f[i]-1)-q; //���Һ�f[i]��ȵ�������һ�� 
		//while(q[pos]==(f[i]-1)&&pos<top) 
	    //pos++; //һֱ�ҵ���ȵ����һ�� 
	    
		if(pos>top||q[pos]!=(f[i]-1))  
		s[++top]=1,q[top]=f[i]; //�޷����£��ؿ�һ���� 
		
		else s[pos]++,q[pos]++; //�Ե�ǰ����� 
	}
	
	cout<<top<<endl;
	for(int i=1;i<=top;i++) ans=min(ans,s[i]); //��������ȡ��Сֵ 
	printf("%d\n",ans);
	return 0;
}
