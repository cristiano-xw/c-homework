#include<iostream>  
#include<cstdio>  
#include<cmath>  
using namespace std;   
int n,minl,maxl,f1[300][300],f2[300][300],num[300];  
int s[300];  
inline int d(int i,int j){return s[j]-s[i-1];}  
//转移方程：f[i][j] = max(f[i][k]+f[k+1][j]+d[i][j];
int main()  
{   
    scanf("%d",&n);  
    for(int i=1;i<=n;i++)  //好吧，终于有时间看看评论区，看来大家对这里异议蛮多的，这里统一解释一下，因为是一个环，所以需要开到两倍再枚举分界线，最后肯定是最大的 
    {  
        scanf("%d",&num[i]);  
        num[i+n]=num[i];  //扩容 
    }
    
    for(int i=1;i<=2*n;i++)
	s[i]=s[i-1]+num[i];  //求出前缀和 
	
    for(int p=1;p<n;p++)  
    {  
        for(int i=1,j=i+p;(j<n+n) && (i<n+n);i++,j=i+p)  
        {  
            f2[i][j]=999999999;  
            for(int k=i;k<j;k++)  
            {  
                f1[i][j] = max(f1[i][j], f1[i][k]+f1[k+1][j]+d(i,j)); //i到j合并以后的最大得分 再加上前缀和 
                f2[i][j] = min(f2[i][j], f2[i][k]+f2[k+1][j]+d(i,j));  
            }  
        }  
    }  
    
    minl=999999999;  
    for(int i=1;i<=n;i++)  
    {  
        maxl=max(maxl,f1[i][i+n-1]);  
        minl=min(minl,f2[i][i+n-1]);  
    }  
    printf("%d\n%d",minl,maxl);  
    return 0;  
}   
