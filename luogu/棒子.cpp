//����ľ�� ��Ҫ����������� �������������ӳ�����ͬ �����������
#include<bits/stdc++.h>
using namespace std;
const int m=1000000007; 
int c[11111]={};//һ�������ֵĴ��� 
int maxx=0;
int t1=0; int t2=0;int t=0;
int main(void)
{
	memset(c,0,sizeof(c));
	int n=0; scanf("%d",&n);
	int i=0; 
	
	for(i=0;i<n;i++)
	{
		int  k=0;
		scanf("%d",&k);
		c[k]++;
		if(k>maxx)
		maxx=k;
	} 
	
	//����Ҫ����ͬ���ȵİ��Ӳſ��Թ�������
	//���һ�ߵİ��ӿ�����ͬ Ҳ���Բ�ͬ
	
	int j=0;
	for(i=1;i<=maxx;i++) //������
	{   
	    if(c[i]>=2)
	    {
		for(j=1;j*2<=i;j++) //ѡȡ�����̱ߵĽϳ��� �����ظ�
		{
		if(j*2==i&&c[j]>=2)
		{
			t1=((c[j]*(c[j]-1)/2)*(c[i]*(c[i]-1)/2)+t1)%m;
	    } 
		if(j*2!=i)
		{
		    t2=((c[i]*(c[i]-1)/2)*(c[j]*c[i-j])+t2)%m;	
		} 
		} 
	    }
	}

   t=(t1+t2)%m;
	printf("%d",t);
	return 0;
}
