#include<bits/stdc++.h>  
using namespace std;
int a[1000020];
int f(int a[], int l, int r, int k)
{ 
	if (l == r)
	{
		if (a[l] == k)
			return l;
	    if(a[l]!=k)
			return -1; 
	}
	
	int mid = (l + r) / 2;
	if (k <= a[mid])
		f(a, l, mid, k); 
	if(k>a[mid]) 
		f(a, mid + 1, r, k); 
}

int main()
{
	int n, m, k;
	cin >> n >> m;
	for (int i = 1; i <= n; i++)
		scanf("%d", &a[i]);
	while (m--)
	{
		scanf("%d",&k);   
		cout << f(a, 1, n, k) <<" ";
	}
	return 0;
}
