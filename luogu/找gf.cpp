#include <iostream>
#include <algorithm>
using namespace std;
int rmb[111], rp[111], time[111];
int dpn[111][111], dpt[111][111];  

int main() 
{
	int n=0; int m=0; int r=0;
	cin >> n;
	 
	for (int i = 1; i <= n; i++)  
	cin >> rmb[i] >> rp[i] >> time[i];
	
	cin >> m >> r;

	for (int i = 1; i <= n; i++)
	{
		for (int j = m; j >= rmb[i]; j--)   
		{
			for (int k = r; k >= rp[i]; k--) 
			{
				if (dpn[j][k] == dpn[j - rmb[i]][k - rp[i]] ) 
				{
					dpn[j][k] = dpn[j - rmb[i]][k - rp[i]] + 1; 
					dpt[j][k] = dpt[j - rmb[i]][k - rp[i]] + time[i];  
				}
				 if (dpn[j][k] == dpn[j - rmb[i]][k - rp[i]] + 1)
					 
				dpt[j][k] = min(dpt[j][k], dpt[j - rmb[i]][k - rp[i]] + time[i]);
			}
		}
	}
	
	 cout << dpt[m][r] ;
	 return 0;
}
