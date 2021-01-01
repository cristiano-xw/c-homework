#include<stdio.h>
int main(void)
{
	int n=0;
	scanf("%d",&n);
	int m=0;
	scanf("%d",&m);
	int a[111][22];//´æ´¢·ÖÊý
	int b[111][22];
	double sum[111];
	double aver[111];
	int maxx=0;
	int i=0;int j=0;
	
	for(i=0;i<n;i++)
	{
	for(j=0;j<m;j++)
	{
		scanf("%d",&a[i][j]);
	}
	}
	
	 
	
	for(i=0;i<n;i++)
	{
		int max=0; int min=0;
		for(j=0;j<m;j++)
		{
			if(a[i][j]>a[i][max])
			{
				max=j;
				 
			//	printf("1 ");
			}
			
			if(a[i][j]<a[i][min])
			{
				min=j;
			 
				//printf("1 ");
			}
		}
		b[i][max]=1;
		b[i][min]=1;		
	}
	  
	 /*for(j=0;j<m;j++)
	 {
	 if(b[0][j]==1)
	 printf("%d ",a[0][j]); 
     }*/
     
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			if(b[i][j]!=1)
			{
				sum[i]+=(double)a[i][j];   
			}
		}
		aver[i]=(double)sum[i]/(double)(m-2);
	}
	
 
	
	for(i=0;i<n;i++)
	{
		if(aver[i]>aver[maxx])
		{
			maxx=i;
		}
	}
	
	
	
	printf("%.2f",aver[maxx]);
	return 0;
	 
}
