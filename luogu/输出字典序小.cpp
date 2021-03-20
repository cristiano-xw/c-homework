#include<iostream>
#include<cstring>
using namespace std;
char s[2222];
int n=0;
int l=0;

void solve()
{
	int a=0; int b=n-1;
	while(a<=b)
	{
		bool left=0;
		for(int i=0;a+i<=b;i++)
		{
			if(s[a+i]<s[b-i])
			{
				left=1;
				break;
			}
			else if(s[a+i]>s[b-i])
			{
				left=0;
				break;
			}
		}
		if(left)	cout<<s[a++];
		else cout<<s[b--];
	}
}


int main()
{
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>s[i];
	}
	
	solve();
	return 0;
}
