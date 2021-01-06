#include<stdio.h>
#include<string.h>
int n=0;
int k=0;
int a[40]={0};
int time=0;
int sushu(int n)
{
	int i=0;
	for(i=2;i<=n/2;i++)
	{
		if(n%i==0&&n!=2)
		{
			return 0;
		}
	}
	
    return 1;
}


void f(int b[],int spot,int m) //在t位置选择m个数 
{
	if(m==0) //已经选择完了k个数 
	{
		int e=0;
		int sum=0;
		for(e=0;e<n;e++)
		{
			if(b[e]==1)
			sum+=a[e];
		}
		//printf("%d\n",sum); 
		if(sushu(sum)==1)
		{
			time++;
		}
		return ;
	}
	
	else
	{
		int r=0;
		for(r=spot;r<n;r++)  //从标记的该点出发 
		{
			if(b[r]==0)
			{
				b[r]=1; //做上标记我来过 
			}
			f(b,r+1,m-1);
		    b[r]=0;
		}
		
		 
		return ;
		
}
	
}


int main(void)
{
	scanf("%d%d",&n,&k);
	int i=0; 
	memset(a,0,sizeof(a));
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);//a中存储数据 
	}
	
	int b[40]={0};
	memset(b,0,sizeof(b));//b中存放是否被取出过 
	f(b,0,k);
	printf("%d",time);
	return 0;
	
}
