#include<iostream>
#include<string.h>
using namespace std;
//˼·�����θ߾��ȣ��ȷֱ���������Ľ׳� ���ٽ�����ӡ� 
int main(void)
{
	int a[10000]={0};//װÿ�����Ľ׳�;
	int b[10000]={0};//װ��;
	int n=0;
	cin>>n;
	int i=0; int j=0;
	
	for(i=1;i<=n;i++)  
	{   
	    a[0]=1;
		for(j=1;j<=i;j++) // ��j�����Ľ׳� 
		{
			int t=0;
			for(t=0;t<10000;t++)
			{
				a[t]*=j;
			}
			int g=0;
			for(g=0;g<10000;g++)
			{
				if(a[g]>=10)
				{
					a[g+1]+=a[g]/10; a[g]=a[g]%10;//�����λ 
				}
			}
		}
		    int t=0;
			for(t=0;t<10000;t++)
			{
				b[t]+=a[t];  //�ѵ�j�����Ľ׳˸�b���� 
				if(b[t]>=10)
				{
					b[t+1]+=b[t]/10; b[t]=b[t]%10;
				}
				a[t]=0;
			}
		
		//memset(a,0,sizeof(a));
	} 
	
	 int k=0;
	for(i=100;i>=0;i--)
	{   
	     
		while(b[i]==0&&k==0)
		{
			i--;
		}
		
		k=1;
		cout<<b[i];  
	}
	return 0;
	
} 
