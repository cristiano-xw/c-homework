//��������������n��a��k��0<n,a,k<=100,n>=2�� 
//�ֱ������������С������������һ��С������������ڱ��С��������
#include<stdio.h>
int sum(int n,int a,int k)//Ҫ�õ�ֵ�����ں��������ﶨ�� ��Ϊֻ���������ֵʵ�λᷢ�͸��β� 
{   
	if (n==1)
	{
		return a;
	}
	else 
	{
		return (sum(n-1,a,k)+k);
	}
}
int main(void)
{   int n,a,k;
	//printf("how many children there are ?\n");
	//scanf("%d",&n);
//	printf("the age of the first child\n");
	//scanf("%d",&a);
	//printf("the age difference between each child\n");
	//scanf("%d",&k);
	scanf("%d%d%d",&n,&a,&k);
	int m;
	if(n>=2&&a>0&&k<=100&&k>0&&a<=100&&n<=100)
	{
	m=sum(n,a,k);
	printf("%d\n",m);
	}
	else 
	{
		printf("Wrong Number");
	}
	
}
//�ҶԵݹ����⣬�ݹ�ʵ������һ�ֺ���������ʵ���ں������ڲ��Լ������Լ�ǰһ����ֵ���Ӷ�ʵ��ѭ���� 






