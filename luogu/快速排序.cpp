#include<iostream>
using namespace std;
int a[111111111]={0};
int n=0;

void quicksort(int l,int r)   //�涨��߽�λl�б߽�Ϊr
{
	int m=a[(l+r)/2];  //ȡ�м�ֵΪ�Ƚϵ� 
	int i=l;int j=r;
	                               
	do
	{
	while(a[i]<m)
	{
		i++;//���С����ֵ   
	}
	
    while(a[j]>m)
    {
    	j--;//�ұߴ����м�ֵ 
	}
	
	if(i<=j) //������Խ�罻�� 
	{
	swap(a[i],a[j]);
	i++;
	j--;
    }
    
    }while(i<=j); //i=jʱΪ�����յ� 
    
    if(l<j)
    {
    	quicksort(l,j);
	}
	
	if(i<r)
	{
		quicksort(i,r);
	}
    
    
} 
int main(void)
{   
    int i=0; 
	cin>>n;
	for(i=1;i<=n;i++)
	{
		cin>>a[i];
	}
	
	quicksort(1,n);   //��ʼʱ��߽�Ϊ1 �ұ߽�Ϊn
   
	for(i=1;i<=n;i++)
	{
		cout<<a[i]<<" ";
	} 
	
	return 0;
}
