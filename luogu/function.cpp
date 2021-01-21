#include<bits/stdc++.h>
using namespace std;
 
long long m [250][250][250]={}; 

long long w(long long a,long long b,long long c)
{  
    
	
	if(a<=0||b<=0||c<=0)
	{
		return 1;
	}
	
	if(m[a][b][c]!=0)
    {
    	return m[a][b][c];
	}
	
	if(a>0&&b>0&&c>0)
	{
	
	if(a>20||b>20||c>20)
	{
		return   w(20,20,20);
	}
	
	if(a<b&&b<c)
	{
	   m[a][b][c]=w(a,b,c-1)+w(a,b-1,c-1)-w(a,b-1,c);
	   return m[a][b][c];
	}
	
	else
	{
		m[a][b][c]=w(a-1,b,c)+w(a-1,b-1,c)+w(a-1,b,c-1)-w(a-1,b-1,c-1);
        return m[a][b][c];
	}
    }
}

int main() 
{   
    long long a=0;long long b=0;long long c=0;//只可以有一个空格 
	memset(m,0,sizeof(m));
	for(;;)
	{
		scanf("%lld%lld%lld",&a,&b,&c);
		 
			if(a==-1&&b==-1&&c==-1)   
			{
				break;
			}
	 
		
		printf("w(%lld, %lld, %lld) = ",a,b,c);
		if(a>20) a=21;
		if(b>20) b=21;
		if(c>20) c=21;
		
		printf("%lld\n",w(a,b,c));	 	
	}
	
	return 0;
}
