#include<bits/stdc++.h>
//两个限定条件，分别是有的钱和人品
//两个比较条件，分别是泡到的npy和时间
//简化三位为2维
using namespace std;
int tim[111];int rmb[111]; int rp[111];
int dpn[111][111]; int dpt[111][111];
int main()
{
	int n=0;
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		cin>>rmb[i]>>rp[i]>>tim[i];
	}
	//memset(dpt,99999999,sizeof(dpt));
	
	int m=0; int r=0;
	cin>>m>>r;
	
	for(int i=1;i<=n;i++)
	{
		for(int j=m;j>=rmb[i];j--)
		{ 
			for(int k=r;k>=rp[i];k--)
			{
				if(dpn[j][k]<dpn[j-rmb[i]][k-rp[i]]+1)
				{
					dpn[j][k]=dpn[j-rmb[i]][k-rp[i]]+1;
					dpt[j][k]=dpt[j-rmb[i]][k-rp[i]]+tim[i];
				}
				if(dpn[j][k]==dpn[j-rmb[i]][k-rp[i]]+1)//如果泡妹数相同 
				{
					dpt[j][k]=min(dpt[j][k],dpt[j-rmb[i]][k-rp[i]]+tim[i]);
				}
			}
		}
	}
	
	cout<<dpt[m][r];
	return 0;
} 
