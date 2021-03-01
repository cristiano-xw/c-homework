#include<bits/stdc++.h>
#define int long long
using namespace std;
struct num
{  
	int id;
	int z;
}s[50024];

int read()
{  
    int w=1,q=0;    
	char ch=' ';
    while(ch!='-'&&(ch<'0'||ch>'9')) ch=getchar();   
    if(ch=='-')w=-1,ch=getchar();  
    while(ch>='0'&&ch<='9')q=q*10+ch-'0',ch=getchar();
    return w*q;
}

bool cmz(struct num a,struct num b)
{
	if(a.z>b.z)
		return true;
	if(a.z==b.z)
		if(a.id<b.id)
			return true;
	return false;
}

bool cmid(struct num a,struct num b)
{
	if(a.id<b.id)
		return true;
	return false;
}

signed main(void)
{
  	int t,n,pd;
	t = read();
	while(t--)
	{
		scanf("%lld",&n);
		for(int i=1;i<=n;i++)
		{
			s[i].id = i; //读入编号 
			s[i].z = read();//读入数值 
		}
		
		sort(s+1,s+n+1,cmz);
		
		for(int i=1;i<=n;i+=pd)
		{
			pd = 1;
			for(int j=i+1;j<=n;j++) 
			{
				if(s[i].z==s[j].z) s[j].z = -2147483644,pd++;
				else break;
			}
		}
		
		sort(s+1,s+n+1,cmid);
		
		for(int i=1;i<=n;i++)
		{
			if(s[i].z!=-2147483644)printf("%lld ",s[i].z);
		}                  
		printf("\n");
	}
	return 0;
}
