#include<stdio.h>
int a[1000001]; int n;
void sort(int p,int q) //p q�ֱ�Ϊ��ʼ����ֹ 
{
	int mid=0;
	mid=a[(p+q)/2];
	int x=p; int y=q; 
	
	while(x<=y) 
	{
		while(a[x]<mid)
		{
			x++;  //x����λ��ʼ�����ң����������м�����ֵ������ 
		}
		
		while(a[y]>mid)
		{
			y--;  //y��ĩλ��ʼ�����ң�����С���м�ֵ���������� 
		}
		
		int t=0;
		t=a[x];
		a[x]=a[y];
		a[y]=t;
		//����λ�� 
		x++;
		y--;
	}
	
	//���еݹ� �Ѿ������м����� 
	if(p<y) sort(p,y);
	if(x<q) sort(x,q);
}

int main(void)
{
	int n=0;
	scanf("%d",&n);
	int i=0;
	for(i=1;i<=n;i++)
	{
	scanf("%d",&a[i]);	
	}
	
	sort(1,n);
	for(i=1;i<=n;i++)
	{
	printf("%d ",a[i]);	
	} 
	return 0;
}
