//ʹ�ò�����������ݽ�������
#include<stdio.h>
#define N 10 //��Ҫ���������Ԫ��������
 
void InserSort(int a[])  //ֱ�Ӳ�������
{   int i=0;int j=0;
 
	for( i=1;i<N;i++)
	{
		int t=a[i];  //ȡ��һ��û����������ݣ�
		for( j=i-1;j>=0&&t<a[j];j--)  //�������������в���λ�ã�
			a[j+1]=a[j];  //����ƶ�����Ԫ�أ�
		a[j+1]=t;
	}
}
                                      
int main(void)
{   
    int i=0;
	int a[N]={3,2,5,8,4,7,6,9,1,10};  //�������飻
	printf("ԭʼ����Ϊ:\n");
	for( i=0;i<N;i++)  //���ԭʼ���ݣ�
		printf("%d ",a[i]);
	printf("\n\n");
	InserSort(a);
	printf("ʹ�ò�������������Ϊ:\n");
	for(i=0;i<N;i++)
		printf("%d ",a[i]);
	printf("\n");
	return 0;
}
