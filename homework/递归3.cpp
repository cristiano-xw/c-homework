#include<stdio.h>
int sum(int arr[],int n) //(����������������)
{
	if (n==0)
	{
		return arr[0];
	}
	else 
	{
		return (sum(arr,n-1)+arr[n]);//�ı��˺�����ֵ���ۼӡ������� 
	}
 } 
int main(void)
{
	int a[10]={1,2,3,4,5};
	int m;
	m=sum(a,9);//ע�ⲻҪԽ�磬�����n���������������һ�������±�Ϊn-1�� 
	printf("%d",m);
	return 0;
}






