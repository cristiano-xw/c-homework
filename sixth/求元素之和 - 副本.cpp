//����һ������s������Ԫ������<=30��������˼��������Ӽ�Ԫ��֮�͡�
//Ӧ��ѡ��long long 
//һ������һ����2�ģ�n-1���η����ǿռ��� ÿһ��Ԫ��ֻ�����2��n-1�η���
#include<stdio.h>
#include<math.h>
int main(void) 
{
	int a[30]={0};
	int i=0;
    while(scanf("%d",&a[i])!=EOF) //�������ȵ����飬�ַ��������Ժ󶼻����EOF��� 
    {
    	i++;
	}
	
	long long sum=0;
	int j=0;
	for(j=0;j<i;j++)
	{
		sum=sum+pow(2,i-1)*a[j];
	}
	
	printf("%lld",sum);
	return 0;
	
}
