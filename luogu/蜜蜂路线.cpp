//�۷�Ҫô��һ��Ҫô������  Ҫʹ�ø߾��ȼӷ� 
#include<bits/stdc++.h>
using namespace std;
int a[1111][1111];
int len=1;

void f(int n)//��ʾ�յ�  //������void����Ϊ������int����long int��������װ�� 
{
  int i=1;//�ӵ�һλ��ʼ�洢 
  
  for(i=1;i<=len;i++)
  {
  	a[n][i]+=a[n-1][i]+a[n-2][i];
  	if(a[n][i]>=10)
  	{
  		a[n][i+1]+=a[n][i]/10;
  		a[n][i]=a[n][i]%10; 
	}
	
	if(a[n][len+1]>0)
	{
		 len++;
	}
	
  }
  
   
  
} 



int main(void)
{   
   int m=0; int n=0;
   scanf("%d%d",&m,&n); //��ʵ�൱�ڴӵ�0��������n-m�� ����Ҫôһ������һ��Ҫôһ����������
   
   a[1][1]=1; a[2][1]=2; 
   
   int i=0;
   for(i=3;i<=n-m;i++)
   {
   	f(i);
   }
   
   for(i=len;i>=1;i--)
   {
   	printf("%d",a[n-m][i]);
   }

	return 0;
}
