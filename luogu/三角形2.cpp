#include<cstdio>
int n,a[1002],i,j,ans,p;
int max(int &x,int &y){return x>y?x:y;}
int main()
{ 
    scanf("%d",&n);
        for(i=n;i;i--)
                for(j=i;j<=n;j++)
                        {scanf("%d",&p),a[j]=max(a[j],a[j+1])+p;}  
        for(i=1;i<=n;i++)
        ans=max(ans,a[i]);
        printf("%d",ans);
        return 0;
}
