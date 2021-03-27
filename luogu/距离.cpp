#include<bits/stdc++.h>
using namespace std;
string s1,s2;
char a[2005]; char b[2005];
int la=0; int lb=0;
int res[2005][2005];

int  dp(int i,int j)
{
	if(res[i][j]!=0) return res[i][j];
	if(i==0) return res[i][j]=j;//a的前i个和b的前j个配对 
	if(j==0) return res[i][j]=i;
	
	int cnt=1;
	if(a[i]==b[j])
	cnt=0; 
	
	return res[i][j]=min(min(dp(i-1,j)+1,dp(i,j-1)+1),dp(i-1,j-1)+cnt);
}


int main()
{
	cin>>s1>>s2;
	la=s1.length(); lb=s2.length();
	
	for(int i=1;i<=la;i++) a[i]=s1[i-1];
	for(int i=1;i<=lb;i++) b[i]=s2[i-1];
	
	dp(la,lb);
	cout<<res[la][lb];
	return 0; 
}
