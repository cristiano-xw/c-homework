#include<bits/stdc++.h>
using namespace std;
int main()
{  
    int a[111111];
    memset(a,0,sizeof(a));
	int n=0;
	cin>>n;
	int i=0;
	for(i=1;i<=n;i++)
	cin>>a[i];
	
	int ans=0;
	ans+=a[1];//�Ƚ���һ��������
	for(i=2;i<=n;i++)
	{
		if(a[i]>a[i-1])
		{
			ans+=a[i]-a[i-1];//���˲��� 
		}
	} 
	
	cout<<ans; 
	return 0;
	
}
