#include<cstdio>
using namespace std;
int w,n,t,ans,s[100010];
int main()
{
    scanf("%d%d%d",&w,&n,&t);  //w即为公路长度，n为原有路标数，t为可增设路标数；
    for(int i=1;i<=n;i++)
    scanf("%d",&s[i]);
    int l=0,r=w;  //二分基本套路；
        
		while(l<=r) 
		{  
        int mid=(l+r)/2,flag=0,k=0;  //变量flag用来模拟路标，k为增设路标数；
        
		for(int i=1;i<=n;i++)
		{     
            while(s[i]-flag>mid)
            flag+=mid,k++;  //如果两路标距离，即空旷指数大于mid，就增设一个路标；
            if(k>t) break;  //如果增加的路标数已经大于t，直接退出循环；
            if(flag<s[i]) flag=s[i];
        }
        
        /*while(w-flag>mid)
        flag+=mid,k++;  //别忘了道路终点还有路标；*/
        
		if(k>t) l=mid+1;
        
		else r=mid-1,ans=mid;  //二分套路不用解释了吧；
    }
    printf("%d",ans);return 0;  //ans才是最后答案；
}
