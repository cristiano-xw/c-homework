#include<stdio.h>
void sort(int a[100],int n)
{
    int i=0; int j=0;
    for(i=0;i<n;i++)
    {
    	int k=0;
    	k=a[i];//�ҵ�һ����û���������
	    for( j=i-1;j>=0&&k<a[j];j--)  //�������������в���λ�ã� 
	    {
	    	a[j+1]=a[j]; //������ 
		}
		a[j+1]=k;
	}
}

int main(void)
{
	int n=0;
	printf("������ż�����\n");
	scanf("%d",&n);
	
	int a[100]={0};
	int i=0;
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	
	sort(a,n);
	
	for(i=0;i<n;i++)
	{
		printf("%d ",a[i]);
	}
	
	return 0;
	
	
}
