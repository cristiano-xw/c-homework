//˼· ���Ƚ�10�����ֱַ���Ҫ�Ļ�����Ŀ¼��
//����ֻ���ܵ�111 �ڱ���ÿ����������Ҫ�Ļ����Ŀ ���Ϸ��ſ��Ƿ� ����n
#include<bits/stdc++.h>
using namespace std;
int a[10]={6,2,5,5,4,5,6,3,7,6};
int b[888]={};//�洢ÿһ��������Ҫ�����

int f(int num)//num��Ϊ���� �˺����������ǽ�����ת��Ϊ������Ŀ
{
	if(num<=9)
	{
		b[num]=a[num];
	}
	
	if(num>=10)
	{   
        int j=0;
		j=num;
		while(j>0)
		{
			b[num]=b[num]+a[j%10];
			j=j/10;
		} 
	}
	
   int k=0; k=b[num];
   b[num]=0;
   return k;
   
} 

int main(void)
{   
    int i=0; int j=0;
    memset(b,0,sizeof(b));
	int n=0;
	cin>>n;
	int total=0;
	
	
	for(i=0;i<=777;i++)
	{
		for(j=0;j<=777;j++)
		{
			if(f(i)+f(j)+f(i+j)+4==n)  
			{
				total++;
			}
		}
	}
	
	cout<<total;
	return 0;
}
