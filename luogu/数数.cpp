#include<stdio.h>
#include<string.h>
#include<math.h>
int main(void)
{
	int M=0;int N=0;
	scanf("%d%d",&M,&N);
	int i=0;
	int a[12]={0};//������ų��ֵĴ��� 
	
	for(i=M;i<=N;i++)
	{
		int v=0;//�ж�λ��
		int r=0;
		r=i;
		while(r>0)
		{
			r=r/10;
			v++;
		} 
		
		int j=0;
		for(j=0;j<v;j++)
		{
			int k=0;
			k=(int)(i/pow(10,v-1-j))%10;
			//printf("%d ",k);
			a[k]++;
		}
		
		
	}
	
	int h=0;
	for(h=0;h<=9;h++)
	{
	printf("%d ",a[h]);
	}
	
	return 0;
}
