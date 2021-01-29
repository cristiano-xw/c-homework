#include<cstdio>
#include<iostream>
#include<cstdlib>
using namespace std;
int a[10001]={1},n;
int search(int,int);
int print(int);
int main()
{
	cin>>n;
	search(n,1);//将要拆分的数n传递给s
	return 0;
}

int search(int s,int t)
{
	int i;
	for(i=a[t-1];i<=s;i++)
	{ 
			a[t]=i;//保存当前拆分的数i
			s-=i;//s减去数i，s的值将继续拆分
			if(s==0)print(t);//当s=0时，拆分结束输出结果
				else search(s,t+1);//当s>0时，继续递归
			s+=i; 
	 } 
}

int print(int t)
{
	for(int i=1;i<=t-1;i++)//输出一种拆分方案
		cout<<a[i]<<"+";
	cout<<a[t]<<endl;
}
