#include<bits/stdc++.h>
using namespace std;

struct node
{
	double k; //���� 
	double t;//��ֵ 
	double d;//��λ��ֵ 
}s[111];


bool tmp(node x,node y)
{
	return x.d>y.d;//���յ�λ��ֵ�������� 
};


int main()
{
	int n=0;
	double b=0;
    cin>>n>>b;
	
	int i=1;
	for(i=1;i<=n;i++) 
	{
		cin>>s[i].k>>s[i].t;
		s[i].d=s[i].t/s[i].k;
	}
	
	sort(s+1,s+n+1,tmp);
	
	double mon=0;//��ʾ�������ж���Ǯ 
	
	for(i=1;i<=n;i++)
	{
		if(b>=s[i].k)
		{
			mon=mon+s[i].t;
			b=b-s[i].k;
		}
		
		if(b<s[i].k)
		{
			mon=mon+s[i].d*b;   
			break;
		}
	}
	
	printf("%.2lf",mon);   
	return 0;
}
