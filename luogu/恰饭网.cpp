#include<stdio.h>
#include<string.h> 
int main(void)
{   
    int n=0;int m=0;
    scanf("%d%d",&n,&m);
    int a[111]={0};int f[111][1111]={0}; 
    memset(f,0,sizeof(f));//ȫ������ 
    int i=0;
    for(i=1;i<=n;i++)
    {
    	scanf("%d",&a[i]);
	}
	
	int j=0;//��i���˿ɵ㣬��jԪǮ 
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=m;j++)
		{
			if(j==a[i])
			{
				f[i][j]=f[i-1][j]+1;//�ոճԵ�����һ�� ����һ���Է� 
			}
			
			if(j<a[i])
			{
				f[i][j]=f[i-1][j];//�Բ�������ˣ���ǰi-1�������һ���jԪ�ĳԷ� 
			}
			
			if(j>a[i])
			{
				f[i][j]=f[i-1][j]+f[i-1][j-a[i]]; //����ʣ�µ�Ǯ��Ҫô��ǰi-1��������ɵ�����Ҫô�ͳ����� 
			}
		}
	}
	
	printf("%d",f[n][m]);
	return 0;
}
