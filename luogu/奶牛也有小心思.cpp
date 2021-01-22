#include<bits/stdc++.h>
using namespace std;                 
int main(void)
{
	char a[50]="";
	memset(a,0,sizeof(a));
	long long int b=0;
	scanf("%s%lld",a+1,&b);//从第一位开始存储 
    long long int l=0; long long int t=0;
	t=l=strlen(a+1);
	cout<<a;
	
	while(t<b)    
	{
		t=t*2;  //长度不断翻倍 
	}
	
	while(t!=l)  
	{
		t=t/2;//长度减半
		
		if(b>t)
		{   
		    if(b-t-1!=0)
			b=b-t-1;
			if(b-t-1==0)
			{
				b=t;
			}
		} 
		
		
		
		
		
		if(b<l)
		{
			b=b;//回到了最初的字符串 
		}
	}
	
	printf("%c",a[b]);
	
	return 0;
}
