#include<cstdio>
int b[125][125];
int main() 
{ 
	int n,ans=-1828805;//经过计算，最小不会小过这个值 
	scanf("%d",&n);
	for(register int i=1;i<=n;++i) {
		for(register int j=1;j<=n;++j) {
			int a;
			scanf("%d",&a);
			b[i][j]=b[i-1][j]+a;
		}
	}
	
	for(register int i=1;i<=n;++i) 
	{
		for(register int j=1;j<i;++j)
		 {
			int sum=0;
			for(register int k=1;k<=n;++k) 
			{   
				int tmp=b[i][k]-b[j][k]; //取前缀和 
				if(sum<0)	sum=0;
                sum+=tmp;
				if(sum>ans)	
				ans=sum; 
			}
		}
	}
	
	printf("%d",ans);
	return 0;
}
