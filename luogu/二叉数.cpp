#include<iostream>
#include<cstdio>
using namespace std;
int n,v[49],dp[49][49],root[49][49];

int ser(int l,int r){
    if(dp[l][r]>0)return dp[l][r];
    if(l==r)return v[l];
    if(r<l)return 1;
    for(int i=l;i<=r;i++){
        int p=ser(l,i-1)*ser(i+1,r)+dp[i][i];
        if(p>dp[l][r]){
            dp[l][r]=p;root[l][r]=i;
        }
    }
    return dp[l][r];
}

void print(int l,int r){
    if(r<l)return;
    if(l==r){printf("%d ",l);return;}
    printf("%d ",root[l][r]);
    print(l,root[l][r]-1);
    print(root[l][r]+1,r);
}

int main(){
    scanf("%d",&n);
    for(int i=1;i<=n;i++)scanf("%d",&v[i]),dp[i][i]=v[i];
    printf("%d\n",ser(1,n));
    print(1,n);
    return 0;
} 

