#include <iostream>
#include <cstring>
using namespace std;
int n,a[101][101],p,b[11];
bool f[11];
long long ans=0x7ffffff;

void dfs(int now,int m,long long sum)
{
	if(m==0)//��ÿ���㶼�߹�
		ans=min(ans,sum+a[now][n]);//�ǵü��ϵ�n�ľ���
	else{
		for(int i=1;i<=p;i++){
			if(!f[i]){//���ûȥ��
				f[i]=1;
				dfs(b[i],m-1,sum+a[now][b[i]]);
				f[i]=0;//����
			}
		}
	}
}

int main(){
	int i,j;
	long long k;
	cin>>n;
	for(i=1;i<=n;i++)
		for(j=1;j<=n;j++)
			cin>>a[i][j];
	cin>>p;
	for(i=1;i<=p;i++)
		cin>>b[i];
		
	for(k=1;k<=n;k++)//Floyed
		for(i=1;i<=n;i++)
			for(j=1;j<=n;j++)
				if(a[i][k]!=0&&a[k][j]!=0)//��ֹi��j����Ϊ0
					a[i][j]=min(a[i][j],a[i][k]+a[k][j]);
					
	dfs(1,p,0);
	
	cout<<ans<<endl;
	return 0;
}
