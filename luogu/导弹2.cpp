#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n=0; int i=1; int ans1=1; int ans2=1; int j=0;
	int a[100005]; int f[100005];
	memset(a,0,sizeof(a)); 
	memset(f,0,sizeof(f));
	
	while(scanf("%d",&a[i])!=EOF)
	{
		i++;
	}
	n=i-1;//n��ʾ����ĳ��� 
	
	for(i=n;i>=1;i--)
	{   
	    f[i]=1;//��ʼ�� 
		for(j=i+1;j<=n;j++)//j��i�ĺ���
		{
			if(a[j]<=a[i])
			{
				f[i]=max(f[i],f[j]+1);
			}
		} 
		ans1=max(ans1,f[i]);
	}
	
	
	for(i=1;i<=n;i++)//����������� 
    {
     	f[i]=1;
     	for(j=1;j<i;j++)
     	{
     		if(a[j]<a[i])
     		{
     			f[i]=max(f[i],f[j]+1);
			}
		}
		ans2=max(ans2,f[i]);
	}	
	 
	
	printf("%d\n%d\n",ans1,ans2);
	return 0;
}
