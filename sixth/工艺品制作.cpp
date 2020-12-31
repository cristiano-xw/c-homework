#include<stdio.h>
int main(void)
{
	int q=0;
	
	int i=0;
	int w=0,x=0,h=0;
	int a[22][22][22]={0};       
	scanf("%d%d%d",&w,&x,&h);
	scanf("%d",&q);
	int r=0,t=0,y=0;
	
	for(i=0;i<q;i++)
	{
		int x1=0,y1=0,z1=0,x2=0,y2=0,z2=0;
		scanf("%d%d%d%d%d%d",&x1,&y1,&z1,&x2,&y2,&z2);
	                        
	 
		for(r=x1-1;r<=x2-1;r++)                    
		{
			for(t=y1-1;t<=y2-1;t++)
			{
				for(y=z1-1;y<=z2-1;y++)
				{
					 a[r][t][y]=1;
				}
			}
		}
		
	}
	
	int v=0;
	for(r=0;r<w;r++)
	{
		for(t=0;t<x;t++)
		{
			for(y=0;y<h;y++)
			{
				if(a[r][t][y]==0)
				{
					v++;
				}
			}
		}
	}
	
	 
	//printf("%d\n",v);
	printf("%d",v);
	return 0;
	
}
