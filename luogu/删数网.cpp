#include<bits/stdc++.h>  
using namespace std;
int n,k,rest,t=1,minn,cnt=0; 
bool flag=0;
char a[260]; 
int main()
{
    memset(a,0,sizeof(a));
    int i=1;
    
    while(a[i-1]!='\n')
    {
    	scanf("%c",&a[i]);
    	i++;
	}
	n=i-3; //长度 
	
	 
	cin>>k;
	
    rest=n-k;
    
    while(cnt<rest)
	{
        minn=t; 
        for(int i=t;i<=k+t;i++) 
		if(a[minn]>a[i])minn=i;//找最小数然后输出 
		   
        if(a[minn]) flag=1;//做上标记 而且保证输出的数据不为0  
        
        if(flag)    
		cout<<a[minn];
        k-=minn-t;  // 长度减去删去的数 
        t=minn+1;  //从输出的最小数开始   
        cnt++;//输出数据  
    }
    
    if(!flag)cout<<0;  
    
    return 0;
}
