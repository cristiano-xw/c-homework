#include<stdio.h>
int main(void)
{
	int n;//һ����n����
	scanf("%d",&n);
	int sum=0; 
	int i=1;
	int k=1;
	for(i=1;i<=n;i++)  //һ����n������� 
	{
		int j=1;int add=1;
		for(j=1;j<=k;j++)       //ÿ��������k����֮��             
		{
			add=j*add;
		}
		k++;
		//printf("%d\n",add);
		sum += add;
	} 
	
	printf("%d",sum);
}
