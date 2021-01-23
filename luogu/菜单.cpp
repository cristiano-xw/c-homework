//此题用递归，美味程度为n，第一个递归变量即为当前地美味程度。菜品数一共只有10种，第二个递归变量即为
//当前菜品的美味程度.
#include<bits/stdc++.h>
using namespace std;
int n=0;int kind=0;//表示种数 
int m[10000][111];  //前面一个存第几个方案，后面一个存每个菜品的质量 
int a[11];//存一个方案里面的对应菜品的质量

void f(int total,int d)//total表示此时的质量，d表示此时存到第几到菜了
{    
     int i=0;
	 if(total<n&&d<10)
	 {
	 	for(i=1;i<=3;i++)
	 	{
	 		a[d]=i;
			f(total+i,d+1) ;
		}
	 }  
	 
	 if(total==n&&d==10)
	 {
	 	int j=0;
	 	for(j=0;j<10;j++)
	 	{
	 	m[kind][j]=a[j];	
		}
		kind++;
	 }
} 

int main(void)
{   
    scanf("%d",&n);
    
	if(n<10)
    {                 
    	printf("0"); 
    	return 0;
	}
	
	int i=0 ;int j=0;
	f(0,0);
	printf("%d\n",kind);
	for(i=0;i<kind;i++)
	{
		for(j=0;j<10;j++)
		{
			printf("%d ",m[i][j]);
		}
		printf("\n");
	}
	return 0;
} 
