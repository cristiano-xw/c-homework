#include<bits/stdc++.h>
using namespace std;
int n=0;

void search(int x)
{   
    int s=0;
    s=x;//s��Ϊ���ɱ��� 
	
	if(x>0)
	{    
	    printf("2");//������Ҫ������� 
		int k=0;//��ʾ�η�
		while(s>=pow(2,k))
		{
			k++;
		}
		k--;//��ʾ��ߴη�
		
		if(k>=3)
		{
			printf("(");
			search(k);
			printf(")");
		} 
		
		if(k==2)
		{
			printf("(2)");
		}
		
		if(k==0)
		{
			printf("(0)");
		}
		//k=1����
		
		x=x-pow(2,k);
		if(x>0)
		{
			printf("+");
			search(x);
		} 
	}
	
	
	
}
int main()
{
	scanf("%d",&n);
	search(n);//���� 
	return 0;
}
