#include<stdio.h>
#include<string.h>
int main(void)
{   
    char a[111][111];
    memset(a,0,sizeof(a));
    //��һ����2������r, c����ʾ���ӱ����r��c�С���������r�У�ÿ��c��������
	//��ʾÿ����Ԫ���ֵ���ٽ�������һ����1������n����ʾ�����n�У�ÿ����һ���������
    int r=0;int c=0;
    scanf("%d%d",&r,&c);
    int i=1;int j=1;
    
    for(i=1;i<=r;i++)
    {
    	for(j=1;j<=c;j++)
    	{
    		scanf("%d",&a[i][j]);//ֻ����int���͵��� 
		}
	}
	
    
	
	int n=0;
	scanf("%d",&n);
	int k=0;
	
	for(k=0;k<n;k++)
	{
		char f[3]="0";
		scanf("%s",f);
		
		if(strcmp(f,"SR")==0)
		{
			int p=0;int q=0;
			scanf("%d%d",&p,&q);
			char m[55]="0";
			strcpy(m,a[p]);
			strcpy(a[p],a[q]);
			strcpy(a[q],m);
			printf("%s\n",m);
			 
			//for(j=1;j<=c;j++)
			//{
			//	printf("%d ",a[1][j]);
			//}
			
			printf("ok\n");
		}
		
		
		if(strcmp(f,"SC")==0)  
		{
			int p=0;int q=0;
			scanf("%d%d",&p,&q);
			for(i=1;i<=r;i++)
			{
				int h=0;
				h=a[i][p];
				a[i][p]=a[i][q];
				a[i][q]=h;
			}
		}
		
		if(strcmp(f,"DR")==0)
		{
			int x=0;
			scanf("%d",&x);
			for(i=x;i<r;i++)
			{
				strcpy(a[i],a[i+1]);
			}  
			r=r-1;
		}
		
		if(strcmp(f,"DC")==0)
		{
			int y=0;
			scanf("%d",&y);
			for(i=1;i<r;i++)
			{
				for(j=y;j<c;j++)
				{
					a[i][j]=a[i][j+1];
				}
			}
			c=c-1;
			
		}
		
		
		if(strcmp(f,"IR")==0)
		{
		   int x=0;
		   scanf("%d",&x);
		   for(i=r+1;i>=x;i--)
		   {
		   	strcpy(a[i],a[i-1]);
		   }
		   
		   for(j=1;j<=c;j++)
		   {
		   	a[x][j]=0;
		   }
		   r=r+1;
		   	
		}
		
		if(strcmp(f,"IC")==0)
		{
			int y=0;
			scanf("%d",&y);
			for(i=1;i<=r;i++)
			{
				for(j=c+1;j>=y;j--)
				{
					a[i][j]=a[i][j-1];  
				}
			}
			
			for(i=1;i<=r;i++)
			{
				a[i][y]==0;
			}  
			
			c=c+1;
		}
	}
	for(i=1;i<=r;i++)
	{
		for(j=1;j<=c;j++)
		{
			printf("%d",a[i][j]);
		}
		printf("\n");
	}
	
	
	
 
	return 0;
}
