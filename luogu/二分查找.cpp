//�����˼·�Ƕ��ֲ���
//��������һ���Ѿ�����õ����� 
#include<bits/stdc++.h>
using namespace std;
int a[1111111]={}; 

int f(int a[],int l,int r,int k)
{
	if(l==r)//���ֲ��Ҳ�����С�𰸷�Χ 
	{
		if(a[l]==k)   
		{  
		  //cout<<l<<" ";
		  return l;
		}
		if(a[l]!=k)
		{
		 //cout<<"-1";
		 return -1;
		}
	}
	
    int mid=(l+r)/2;
    
    if(a[mid]>=k)
    {
    	f(a,l,mid,k);
	}
	else
	{
		f(a,mid+1,r,k); 
	}
}

int main()
{
	int n=0; int t=0;
	scanf("%d%d",&n,&t);
	int i=0;
	for(i=1;i<=n;i++)
	{
		scanf("%d",&a[i]);
	}
	
	while(t--)
	{
		int k=0;
		scanf("%d",&k);//�ҵ�k����� 
		cout<<f(a,1,n,k)<<" ";
	} 
    
    return 0;
} 
