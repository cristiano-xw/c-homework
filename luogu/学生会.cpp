#include<stdio.h>
int main(void)
{
	int n=0;
	scanf("%d",&n);
	int a[1000]={0}; //分别存储每个候选人的得票;
	
	int m=0;
	scanf("%d",&m);
	int i=0;  
	for(i=0;i<m;i++)
	{
		int j=0;
		scanf("%d",&j);
		a[j]++;
	} 
	
	for(i=1;i<=n;i++)
	{    int q=0;
		for(q=1;q<=a[i];q++)  
		{
			printf("%d ",i);
		}
	}
	
	return 0;
}
