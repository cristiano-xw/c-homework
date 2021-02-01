#include<bits/stdc++.h>
using namespace std;
int n=0;

void search(int x)
{   
    int s=0;
    s=x;//s作为过渡变量 
	
	if(x>0)
	{    
	    printf("2");//搜索都要输出底数 
		int k=0;//表示次方
		while(s>=pow(2,k))
		{
			k++;
		}
		k--;//表示最高次方
		
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
		//k=1不管
		
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
	search(n);//搜索 
	return 0;
}
