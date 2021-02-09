#include<bits/stdc++.h>
using namespace std;

struct cmp
{ 
bool operator()(int a,int b)  
{
  return a>b;
}
}; 

int main()  
{   
    int a[100005],f[100005],l[100005];
    memset(a,0,sizeof(a));
    memset(f,0,sizeof(f));
    memset(l,0,sizeof(l));
    
    int n=1; int i=1;
    while(scanf("%d",&a[i])!=EOF)
    {
    	i++;
	}
	      
    n=i-1;
    int ans1=1,ans2=1;
    l[1]=f[1]=a[1];
    int p=1; int q=1;
                         
    for(int i=2;i<=n;i++)
    {
    	if(l[ans2]>=a[i]) //如果满足前一个数大于后一个数 就 继续检索 同时更新ans的值 
    	{   
    	    ans2++; 
    		l[ans2]=a[i];
		}
		 
        
        else
        {
        	int k=upper_bound(l+1,l+ans2+1,a[i],cmp())-l;//返回第一个大于等于a[i]的位置
			l[k]=a[i];  
		}
        
		if(f[ans1]<a[i]) 
		{
			ans1++; 
			f[ans1]=a[i];
		}
		
        
        else
        {
        	int k=lower_bound(f+1,f+ans1+1,a[i])-f; 
        	f[k]=a[i];
		}
    }
              
    cout<<ans2<<endl<<ans1;
    return 0;
}
