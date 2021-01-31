#include<stdio.h>
int main()
{   
    int a[100005];
	int n; int m;
    scanf("%d%d",&n,&m);
	int i=0;
	for(i=1;i<=n;i++)
	{
		scanf("%d",&a[i]);
	}
	
    int ans=0;
	for(i=1;i<=n;)
	{
		int s=0;
		while(s<m)
		{
			s+=a[i];
			i++;
			if(s>m)
			{
				i--;
			}
		}
		ans++;
		
	}
	
	printf("%d",ans);
	return 0;
	
}
