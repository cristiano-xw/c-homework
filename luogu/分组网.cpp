#include<cstdio>
#include<algorithm>
using namespace std;
const int MAXN=1e5+40;
int f[MAXN],n,ans=1e9,siz[MAXN],top,q[MAXN];
signed main()
{
	scanf("%d",&n);
	for(int i=1;i<=n;i++) scanf("%d",&f[i]);
	sort(f+1,f+n+1);
	for(int i=1;i<=n;i++)
	{
		int pos=lower_bound(q+1,q+top+1,f[i])-q; //���ҵ�ǰ��ԱӦ�÷�����һ�� 
		while(q[pos+1]==f[i]&&pos<top) 
		pos++; //һֱ�ҵ���ȵ����һ�� 
		
		if(pos>top||q[pos]!=f[i]) siz[++top]=1,q[top]=f[i]+1; //�޷����£��ؿ�һ���� 
		else siz[pos]++,q[pos]=f[i]+1; //�Ե�ǰ����� 
	}
	
	for(int i=1;i<=top;i++) 
	ans=min(ans,siz[i]); //��������ȡ��Сֵ 
	printf("%d\n",ans);
	return 0;
}
