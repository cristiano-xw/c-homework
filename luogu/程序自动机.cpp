#include<bits/stdc++.h>         
using namespace std;
int t=0; int n=0;
int f[1000007],ans[3333333];  

struct node{
    int x,y,e;
}a[1000001];  

bool cmp(node a,node b)
{
    return a.e>b.e;
}

int find(int x){
    if(x==f[x]) return x;
    return f[x]=find(f[x]);
}

int main()
{
    scanf("%d",&t);
    while(t--)
	{
      int tot=0;
      int flag=1;
      scanf("%d",&n);
       
        for(int i=1;i<=n;i++)
		{
            scanf("%d %d %d",&a[i].x,&a[i].y,&a[i].e);
            ans[++tot]=a[i].x;
            ans[++tot]=a[i].y;      
        } 
        
        sort(ans+1,ans+tot+1); 
        int cnt=unique(ans+1,ans+tot+1)-ans;  //ШЅжи 
        int j=0;
        for(j=1;j<=cnt;j++)
        {
        	f[j]=j;
		}
        
        for(int i=1;i<=n;++i){
           a[i].x=lower_bound(ans,ans+cnt,a[i].x)-ans;
           a[i].y=lower_bound(ans,ans+cnt,a[i].y)-ans;   
        } 
               
        sort(a+1,a+n+1,cmp);   
        for(int i=1;i<=n;i++)
		{
            int r1=find(a[i].x);
            int r2=find(a[i].y);
            if(a[i].e==1)
			{
                f[r1]=r2;  
            }
			
			else
		    if(r1==r2)
			{
                printf("NO\n");
                flag=0;  
                break;
            }
        }
        
        if(flag==1)    printf("YES\n");   
    }
    return 0;
}
