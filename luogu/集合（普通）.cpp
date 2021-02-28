#include<bits/stdc++.h> 
#define maxn 100010
using namespace std;
int f[maxn];
int a,b,p,ans;
bool prime[maxn];
int vis[maxn];
int cnt;

int getf(int x)
{
    if(f[x]==x) return x;
    else
    {
        f[x]=getf(f[x]);
        return f[x];
    }
}

int merge(int x,int y)
{
    int t1=getf(x),t2=getf(y);
    if(t1!=t2)
    {
        f[t2]=t1;
        return 1;
    }
    return 0;
}

void make_prime()      //��ͨɸ 
{
    memset(prime,1,sizeof(prime));//ȫ����ʼ��Ϊ���� 
    int k=sqrt(b);
    prime[0]=prime[1]=0;
    
    for(int i=2;i<=k;i++)
        if(prime[i])
            for(int j=2*i;j<maxn;j+=i) prime[j]=0;
}

int main()
{
    cin>>a>>b>>p;
    for(int i=a;i<=b;i++) f[i]=i; //��Ϊһ�� 
    
    make_prime();
    for(int i=p;i<=b;i++)      //�ҳ�p~b֮������� 
        if(prime[i]) vis[++cnt]=i;  //��¼ 
        
    for(int i=1;i<=cnt;i++)     //�ҳ�a~b֮����������������ϲ� 
    {
        int cc=0;
        while(cc*vis[i]<a) cc++;     //ȷ����a~b֮��ģ���Ҫ����Χ����Ȼ����û��ͳ�� 
        while(vis[i]*(cc+1)<=b)
        {
            merge(vis[i]*cc,vis[i]*(cc+1));     //�ϲ� 
            cc++;
        }
    }
    
    for(int i=a;i<=b;i++)
        if(f[i]==i) ans++;     //ͳ�Ƹ��� 
    cout<<ans<<endl;
    return 0;
}
