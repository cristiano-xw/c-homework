#include<stdio.h>
#include<string.h>
int main(void)
{   
    int a[111][111];
    memset(a,0,sizeof(a));
    int n=0;
    int i=0;int j=0;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
    	for(j=1;j<=n;j++)
    	{
    		a[i][j]=1;//先初始化为1 
		}
	}
	
	int p=0;int q=0;
	scanf("%d%d",&p,&q);
	
	for(i=1;i<=p;i++)
	{
		int x=0;int y=0;
		scanf("%d%d",&x,&y);
		a[x-1][y]=2;
		a[x-2][y]=2;
		a[x+1][y]=2;
		a[x+2][y]=2;
		a[x][y]=2;
		a[x][y-1]=2;
		a[x][y-2]=2;
		a[x][y+1]=2;
		a[x][y+2]=2;
		a[x-1][y-1]=2;
		a[x+1][y-1]=2;
		a[x-1][y+1]=2;
		a[x+1][y+1]=2;		
	}
	
	for(i=1;i<=q;i++)
	{
		int x=0;int y=0;
		scanf("%d%d",&x,&y);
		int w=0;int e=0;
		for(w=x-2;w<=x+2;w++)
		{
			for(e=y-2;e<=y+2;e++)
			{
				a[w][e]=2;
			}
		}
	}
	
	
	int v=0;
    for(i=1;i<=n;i++)
    {
    	for(j=1;j<=n;j++)
    	{
    	   if(a[i][j]==1)
    	   {
    	   	v++;
		   }
		}
	}
	
	printf("%d",v);
	
	
	
	
	
	
	return 0;
}
