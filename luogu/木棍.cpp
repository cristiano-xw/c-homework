# include <bits/stdc++.h>
using namespace std;
# define maxN 50005
struct Stick 
{
 int l, w;
}stick[maxN];
 
int n, dp[maxN];
bool cmp(Stick, Stick);
 
int main() 
{ 
	cin >> n;
	for(int i = 1; i <= n; ++i) 
	cin >> stick[i].l >> stick[i].w;
	
	sort(stick + 1, stick + 1 + n, cmp);
    
	dp[1] = stick[1].w; 
     
	int k = 1;  
	int j=0; 
	for(int i = 2; i <= n; ++i) 
	{
	j = lower_bound(dp + 1, dp + k +1, stick[i].w) - dp;
	j <= k ? dp[j] = stick[i].w : dp[++k] = stick[i].w;
	}
     
	cout << k << '\n';
	return 0;
}

bool cmp(Stick a, Stick b) 
{
	if(a.l != b.l) return a.l > b.l; 
	return a.w > b.w; 
}
