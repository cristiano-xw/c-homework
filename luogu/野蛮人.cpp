#include<bits/stdc++.h>
using namespace std;
int main(void)
{
	char a[100][100];
	memset(a,' ',sizeof(a));
	a[1][1]=a[1][4]=' ';
	a[1][2]=a[2][1]='/';
	a[1][3]=a[2][4]='\\'; 
	a[2][2]=a[2][3]='_';//坐标从(1,1)到(2,4) 
	int i=0; int j=0;
	
	int h=2; int w=4;
	int n=0; scanf("%d",&n);
	int k=0;
	
	for(k=1;k<n;k++)//k次循环 
	{ 
		for(i=1;i<=h;i++)
		{
			for(j=1;j<=w;j++)
			{
				a[i+h][j]=a[i+h][j+w]=a[i][j];  
				a[i][j]=' ';//向下复制  
			}
		}
		
		for(i=1;i<=h;i++)
		{
			for(j=1;j<=w;j++)
			{
				a[i][j+w/2]=a[i+h][j];//重塑上方结构 
			}
		}
		
		h=h*2;w=w*2;
	}
	
	for(i=1;i<=h;i++)
	{
		for(j=1;j<=w;j++)
		{
			cout<<a[i][j];
		}
		cout<<endl;
	}
	

	
	return 0;
	
} 
