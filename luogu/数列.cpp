#include<stdio.h>
#include<string.h>
int main(void)
{
	int a[50][10];
	memset(a,0,sizeof(a));
	int i=0;
	int j=0;
	int v=0;
	for(i=1;i<50;i++)
	{
		for(j=1;j<=5;j++)
		{
			scanf("%d",&a[i][j]);
			{
				if(a[i][j]==0)
				{
					v++;
				}
			}
		}
		if(v==5)
		{
			break;
		}
		v=0; 
	}
	
	int m=0;
	m=i;//一共有m行。。。
	
	for(i=1;i<m;i++)//等差 
	{
		if(a[i][3]-a[i][2]==a[i][2]-a[i][1]&&a[i][4]-a[i][3]==a[i][3]-a[i][2]&&a[i][5]-a[i][4]==a[i][4]-a[i][3]) 
		{
		 printf("case one\n");
		 {  
		    int d=0;
		    d=a[i][3]-a[i][2];
		 	int r=a[i][5];
		 	int k=0;
		 	j=r+d;
		 	for(k=0;k<5;k++)
		 	{
		 	printf("%d ",j);
			j=j+d;	
			}
			printf("\n");
		 }	
		}
		
		if(a[i][3]/a[i][2]==a[i][2]/a[i][1]&&a[i][4]/a[i][3]==a[i][3]/a[i][2]&&a[i][5]/a[i][4]==a[i][4]/a[i][3])
		{
			printf("case two\n");
			int q=0;
			q=a[i][3]/a[i][2];
			int j=0;
			int k=0;
			j=a[i][5]*q;
			for(k=0;k<5;k++)
			{
				printf("%d ",j);
				j=j*q;
			}
			printf("\n");
		}
		
		if(a[i][3]==a[i][1]+a[i][2]&&a[i][4]==a[i][3]+a[i][2]&&a[i][5]==a[i][4]+a[i][3])
		{
			printf("case three\n");
			int k=0;
			a[i][6]=a[i][4]+a[i][5];
			for(k=6;k<=10;k++)  
			{
				printf("%d ",a[i][k]);
				a[i][k+1]=a[i][k]+a[i][k-1];
			}
			printf("\n");
		}
	}
	 
	
	return 0;
}
