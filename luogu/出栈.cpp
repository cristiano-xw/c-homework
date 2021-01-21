#include<iostream>
#include<stdio.h>
#include<string.h>
using namespace std;
long long int a[20][20]={0};
 
long long int f(int x,int y) //x表示队列里面已有，y栈里面的数 
{
    if(x==0)
    {
    	return 1;//栈里面没有数 
	}
	
	if(a[x][y]!=0)  
	{
		return a[x][y];
	}
	
	 
 
		if(y>=1)
		{
			a[x][y]+=f(x,y-1);//将栈里面已有的数推出 
		}
		a[x][y]+=f(x-1,y+1); //进栈，栈里面的数加一，队列里的数减一 
		return a[x][y];
	 

}

int main(void)
{
	int n=0;
	scanf("%d",&n);
	printf("%lld",f(n,0));   //队列里面有n个数   
	return 0;
}
