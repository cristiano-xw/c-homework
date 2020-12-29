#include<stdio.h>
int a[1000001]; int n;
void sort(int p,int q) //p q分别为起始和终止 
{
	int mid=0;
	mid=a[(p+q)/2];
	int x=p; int y=q; 
	
	while(x<=y) 
	{
		while(a[x]<mid)
		{
			x++;  //x从首位开始向上找，遇到大于中间数的值就跳出 
		}
		
		while(a[y]>mid)
		{
			y--;  //y从末位开始向下找，遇到小于中间值的数就跳出 
		}
		
		int t=0;
		t=a[x];
		a[x]=a[y];
		a[y]=t;
		//交换位置 
		x++;
		y--;
	}
	
	//进行递归 已经到达中间数了 
	if(p<y) sort(p,y);
	if(x<q) sort(x,q);
}

int main(void)
{
	int n=0;
	scanf("%d",&n);
	int i=0;
	for(i=1;i<=n;i++)
	{
	scanf("%d",&a[i]);	
	}
	
	sort(1,n);
	for(i=1;i<=n;i++)
	{
	printf("%d ",a[i]);	
	} 
	return 0;
}
