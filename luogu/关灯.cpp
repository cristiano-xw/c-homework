#include<bits/stdc++.h>
using namespace std;
const int MAXM=60;
int a[MAXM],b[MAXM],sum[MAXM],n,m,c;
int f[MAXM][MAXM][2];

int main()
{
  scanf("%d%d",&n,&c);
  memset(f,127,sizeof(f));//���ɼ���ֵ��ֹ�����min������
  for(int i=1;i<=n;i++)
    scanf("%d%d",&a[i],&b[i]),sum[i]=sum[i-1]+b[i];//���ǰ׺�� 
  f[c][c][0]=f[c][c][1]=0;    //˲�䱻�أ���ʼ����
  
  for(int l=1;l<n;l++)
    for(int i=1;i+l<=n;i++)
    {
    int j=i+l;
    f[i][j][0]=min(f[i+1][j][0]+(a[i+1]-a[i])*(sum[i]+sum[n]-sum[j]),//��������ȥ�������
               f[i+1][j][1]+(a[j]-a[i])*(sum[i]+sum[n]-sum[j]));//���Ǵ�j���۷���������죿����ʱ����[i+1][j]���أ�i������j�˵����ظ�ȥ��i��
//Ҫע���һ����sum[n]-(sum[j]-sum[i])�ǰ�����i��һ��ĵ��ܵģ���Ϊ�߹����Ĺ����е�iҲ��ĵ�
    f[i][j][1]=min(f[i][j-1][0]+(a[j]-a[i])*(sum[i-1]+sum[n]-sum[j-1]),//ͬ��
               f[i][j-1][1]+(a[j]-a[j-1])*(sum[i-1]+sum[n]-sum[j-1]));
    }
        
  int ans=min(f[1][n][0],f[1][n][1]);
  printf("%d",ans);
  return 0;
}
