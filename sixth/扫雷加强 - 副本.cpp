//һ�����ӵ���Χ���Ӱ������ϡ��¡����ҡ����ϡ����ϡ����¡����°˸���������ֱ֮�����ڵĸ���
//����n�У�ÿ��m���ַ�
#include<stdio.h>
#include<string.h>
int main(void)
{
	int n=0;int m=0;
	scanf("%d%d",&n,&m);
	getchar();
	char a[111][111];
	char c;
	memset(a,0,sizeof(a));
	
	int b[111][111]={0};
	
	int i=0;int j=0;
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=m;j++)
		{
			scanf("%c",&a[i][j]);
			if(j==m)
			{
			scanf("%c",&c);	
			} 
			
			if(a[i][j]=='*')
			{
				b[i][j]=1;
			}
			
			if(a[i][j]=='?')
			{
				b[i][j]=0;
			}
		}
		
	}
	
	
	//printf("%c\n",a[1][1]);
	
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=m;j++)
		{
			if(a[i][j]=='*')
			{
				printf("*");
			}
			
			if(a[i][j]!='*')
			{
				printf("%d",b[i-1][j-1]+b[i-1][j]+b[i-1][j+1]+b[i][j-1]+b[i][j+1]+b[i+1][j-1]+b[i+1][j]+b[i+1][j+1]);
			}
		}
		printf("\n");
	}
	
	return 0;
	
}
