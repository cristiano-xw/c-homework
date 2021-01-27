//两个数组 完全占据为f 部分占据为g
#include<bits/stdc++.h>
using namespace std;
const int m=10000;
const int M=1000005;
int f[M]; int g[M];

int main(void)
{ 
    int n=0;
    scanf("%d",&n);
    memset(f,0,sizeof(f)); memset(g,0,sizeof(g));
    
    f[1]=1; f[2]=2; g[1]=1; g[2]=2;
    int i=0;
    
    for(i=3;i<=n;i++) 
    { 
    	f[i]=(f[i-1]+f[i-2]+2*g[i-2])%m;
		g[i]=(g[i-1]+f[i-1])%m;
	}
    printf("%d",f[n]);
	return 0;
} 
