#include <bits/stdc++.h>
using namespace std;
int f[405][405];
int n,a[205]; 
int main()
{
    cin >> n;
    for(int i=1;i<=n;i++)  //***�Ի�������Ĵ�����***
    {
        cin >> a[i];
        a[n+i]=a[i];
    } 
    
    for(int i=1;i<=n;i++)
    {
        for(int l=1;l+i<=2*n;l++)  //�����ȡ���������ԣ�һ��Ҫ��2*n���㶼���� 
        {
            int r=l+i;
            for(int k=l+1;k<=r-1;k++) 
                f[l][r]=max(f[l][r],f[l][k]+f[k][r]+a[l]*a[k]*a[r]); 
        }
    }
    int res=0;
    for (int i=1;i<=n;i++) res=max(res,f[i][n+i]);
    cout << res;
    return 0;
}
