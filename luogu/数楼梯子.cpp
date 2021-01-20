#include<bits/stdc++.h>
using namespace std;
int f[5555][5555];
int l=1;

void z(int k)   //k表示第k楼梯
{
	int i=0;
	for(i=1;i<=l;i++)   //从第一位开始高精加 
	{
		
		f[k][i]+=f[k-1][i]+f[k-2][i];
		if(f[k][i]>=10)
        {
        	f[k][i+1]+=f[k][i]/10;
        	f[k][i]=f[k][i]%10;
		}
		
		if(f[k][l+1]>0)
		{
			l++;
		}
	}
	
	
} 


int main(void)
{
	 int n=0;
	 scanf("%d",&n);
	 f[1][1]=1;f[2][1]=2;
	 
	 int i=0;
	 for(i=3;i<=n;i++)
	 {
	 	z(i);
	 }
	 
	 for(i=l;i>=1;i--)
	 {
	 	printf("%d",f[n][i]);  
	 }
	 
	 return 0;  
}
