#include<stdio.h>
int main(void)
{
	int n=0;
	scanf("%d",&n);
	int a[111]={0};
	int i=0;
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	
	int v=0;//出现次数 
	for(i=0;i<n;i++)
	{
		int j=0;
		for(j=0;j<n;j++)
		{   
		    int k=0;
			int m=0;
			m=a[i]-a[j];
			if(m!=a[j])               
			{
			int t=0;
			for(t=j+1;t<n;t++)
			{
				if(m==a[t])  
				{
					v++;
					k=1;
				    break; 
				}
			}
		  }
		  if(k==1)
		  {
		  	break;
		  }
	}
}
	printf("%d",v);
}
