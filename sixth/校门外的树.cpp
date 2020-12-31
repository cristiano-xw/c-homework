#include<stdio.h>
#include<math.h>
#include<string.h>
int main(void)
{   
    int m=0;int l=0,i=0,n=0,s=0;
    char vis[10010];
    memset(vis,0,sizeof(vis));
    scanf("%d",&l);//长度  //树的个数为l+1                               
    scanf("%d",&m);//区域数 
    for(i=0;i<=l;i++)
    {
    	vis[i]=0;
	}
    for(i=0;i<m;i++)
    {
    	int h,t,p;
		scanf("%d%d",&h,&t);
		for(p=h;p<=t;p++)  //因为树是从第0棵开始的所以第几棵数对应数组下标 
		{   if(vis[p]==0)
		    {
		     vis[p]=1; } //标记为1 
		} 
	}
	
	for(i=0;i<=l;i++)
	{
		if (vis[i]==1)
		{
			n++;
		}
	}
	s=l+1-n;
    printf("%d",s);
    return 0;
    
	
}
