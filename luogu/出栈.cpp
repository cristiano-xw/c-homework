#include<iostream>
#include<stdio.h>
#include<string.h>
using namespace std;
long long int a[20][20]={0};
 
long long int f(int x,int y) //x��ʾ�����������У�yջ������� 
{
    if(x==0)
    {
    	return 1;//ջ����û���� 
	}
	
	if(a[x][y]!=0)  
	{
		return a[x][y];
	}
	
	 
 
		if(y>=1)
		{
			a[x][y]+=f(x,y-1);//��ջ�������е����Ƴ� 
		}
		a[x][y]+=f(x-1,y+1); //��ջ��ջ���������һ�������������һ 
		return a[x][y];
	 

}

int main(void)
{
	int n=0;
	scanf("%d",&n);
	printf("%lld",f(n,0));   //����������n����   
	return 0;
}
