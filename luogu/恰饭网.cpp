#include<stdio.h>
#include<string.h> 
int main(void)
{   
    int n=0;int m=0;
    scanf("%d%d",&n,&m);
    int a[111]={0};int f[111][1111]={0}; 
    memset(f,0,sizeof(f));//全部归零 
    int i=0;
    for(i=1;i<=n;i++)
    {
    	scanf("%d",&a[i]);
	}
	
	int j=0;//有i道菜可点，有j元钱 
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=m;j++)
		{
			if(j==a[i])
			{
				f[i][j]=f[i-1][j]+1;//刚刚吃得起，整一个 多了一个吃法 
			}
			
			if(j<a[i])
			{
				f[i][j]=f[i-1][j];//吃不起这道菜，在前i-1道菜中找花掉j元的吃法 
			}
			
			if(j>a[i])
			{
				f[i][j]=f[i-1][j]+f[i-1][j-a[i]]; //还有剩下的钱，要么在前i-1道菜里面干掉他，要么就吃了它 
			}
		}
	}
	
	printf("%d",f[n][m]);
	return 0;
}
