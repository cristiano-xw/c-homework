#include<bits/stdc++.h>
using namespace std;
int a[111111]; int b[111111];
 
int main()
{ 
    memset(a,0,sizeof(a));
    memset(b,0,sizeof(b));
	int q=0;int j=0;
	int i=0; int n=0; int k=0; 
	cin>>q; 
	for(k=1;k<=q;k++)
	{
	cin>>n;
	for(i=1;i<=n;i++)
	{
		scanf("%d",&a[i]);
    }
    for(i=1;i<=n;i++)
    {
    	cin>>b[i];
	}
		i=1;j=n;int flag=0;
		while(i<=n&&j>=0)
		{
			if(a[j]!=b[i])
			{
				cout<<"No"<<endl;
				flag=1;
				break;
			}
			i++;j--;
		}
		if(flag==0)
		{
			cout<<"Yes"<<endl;
		}
	
   }
   return 0;
	
}                  
