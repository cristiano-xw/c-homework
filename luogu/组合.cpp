#include<bits/stdc++.h>
using namespace std;
int r,a[100],n;
void dfs(int k){//������k����
    int i;
    if(k>r){
        for(i=1;i<=r;i++){
            cout<<setw(3)<<a[i];//���������Ϊ��
        }
        cout<<endl;
        return ;//�ص�ǰһ��
    }
    for(i=a[k-1]+1;i<=n;i++){
        a[k]=i;
        dfs(k+1);//ֱ�ӽ�����һ�ε���
    }
}  
int main()  
{   
    cin>>n>>r;
    dfs(1);
    return 0;  
}  
