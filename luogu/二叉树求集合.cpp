//��һ��ֻ��ʾ0��1�����飬����ʾ��λ�Ƿ���ʾ��
//��ÿһλ����0��1����ѡ����ÿһλѡ�����֮�󣬿�ʼ��ͬ���ķ�ʽ����������һ��Ԫ�أ���������
#include<stdio.h>
#include<malloc.h>
int N;//�����ﶨ��N��Ϊ�˿��Կ纯����ʹ�á� 
void f(int* a,int* tag,int n)
{   
    
	if (n==N) //���ݹ�������������ǣ���n==Nʱ���ݹ������
	{
		printf("--> ");
		for(int i=0;i<N;i++)
		{
			if(tag[i]==1)
			printf("%d ",a[i]); 
		} 
		printf("\n");
		return ;
	} 
    tag[n]=1;//���Ϊ1��˵��Ҫ�����������һ����
	f(a,tag,n+1);
	tag[n]=0;//���Ϊ0�������
	f(a,tag,n+1);// �ݹ�������һ��
}
int main(void)
{
	int m=0;
	scanf("%d",&m);
	int j=0;
	for(j=0;j<m;j++)
	{
	  scanf("%d",&N);//����ÿ������ĳ���
	  int *a;
	  a=(int*)malloc(sizeof(int)*N);//Ϊa������鶯̬����ռ䡣
	  int i=0;
	  for(i=0;i<N;i++)
	  {
	  	scanf("%d",&a[i]) ;//����a��i����һ����������Ҫͨ��ȡ��ַ�ſ������롣 
	   } 
	   int tag[N];
	   f(a,tag,0); 
	}
	
}















