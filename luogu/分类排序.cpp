#include<stdio.h>
int main(void)
{
	int n=0;
	int i=0;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		char a[111]="0";
		int s[111]={0};
		int b[50]={0};//Å¼Êý 
		int c[50]={0};//ÆæÊý 
		int j=0;
		for(j=0;;j++)
		{
			scanf("%d",&s[j]);
			scanf("%c",&a[j]);
			if(a[j]=='\n')
			{
				break;
			}
		}
		
		//printf("%d",j);
		int l=0;
		l=j+1;
		int v=0;
		int t=0;
		for(j=0;j<l;j++)
		{
			if(s[j]%2==0)
			{
				b[v]=s[j];
				v++;
			}
			
			if(s[j]%2!=0)
			{
				c[t]=s[j];
				t++;
			}
		}
		
		int p=0;int q=0;
		for(p=0;p<v-1;p++)
		{
			for(q=p+1;q<v;q++)
			{
				int r=0;
                if(b[p]>b[q])
				{
					r=b[p];
					b[p]=b[q];
					b[q]=r;
				} 
			}
		}
		
		
		for(p=0;p<t-1;p++)
		{
			for(q=p+1;q<t;q++)
			{
				int r=0;
                if(c[p]>c[q])
				{
					r=c[p];
					c[p]=c[q];
					c[q]=r;
				} 
			}
		}
		
		
		//if(v!=0&&t!=0)
		//{
			for(j=0;j<t;j++)
			{
				printf("%d ",c[j]);
			}
			for(j=0;j<v;j++)
			{
				printf("%d ",b[j]);
			}
			printf("\n");
		//}
		
		
		
	}
	
	
	
	return 0;
}
