#include<bits/stdc++.h>
#include<stdio.h>
using namespace std;
int a[5555555];
int k=0;
int h=0;    //h��Ϊ��׼�� 
int quicksort(int i,int j)
{
	//�ֱ����ߺ��ұ߿�ʼѰ��;
	//���Ѱ�Ҵ��ڻ�׼���ģ��ұ�Ѱ��С�ڻ�׼���� ��׼��Ϊ��һ����
	int v=0;
	v=j;//�������һ�����ĽǱ� 
	do
	{
	while(a[i]<a[h])
	{
		i++;
	}
	while(a[j]>a[h])
	{
		j--;
	}
	
	if(i<=j)
	{
		swap(a[i],a[j]);
	}
	swap(a[h],a[i-1]);
    }while(i<=j&&j!=0);
    
    if(i-1==k)
    {
    	return a[i-1];
	}
	
	if(i-2>h+1)
	quicksort(h+1,i-2);
	
	if(i-2<=h+1)
	{
		h++;
		quicksort(h+1,v);
	}
}


int main(void)
{ 
    int n=0; 
    scanf("%d%d",&n,&k);
    int i=0;
    for(i=0;i<n;i++)
    {
    	scanf("%d",&a[i]);
	}
	
	int l=0 ;int r=0;
	l=1;r=n-1;
	quicksort(l,r);
	printf("%d",a[k]);
	return 0;
}
