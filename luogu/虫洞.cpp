#include<cstdio>
#include<vector>
#include<cstring>
#define N 505

using namespace std;


struct node{int dis,nex;}f;
vector<node> mp[N]; //vector��ͼ���±��Ǳߵ���ʼ�㣬dis��Ȩ��nex�Ǳߵ��յ�(�X�m������ʽǰ����5555)
int sum[N],fl[N]={0},flag;

void spfa(int k) 
{  
    if (fl[k]==1) {fl[k]=0; flag=1; return;} //ֻҪһ����ڶ����ߵ���˵���и����ˣ�����˳�
    fl[k]=1;  
    if (!mp[k].empty())
    {
        For(i,0,mp[k].size()-1)
            if (sum[mp[k][i].nex]>mp[k][i].dis+sum[k])
			{   
                sum[mp[k][i].nex]=mp[k][i].dis+sum[k];
                spfa(mp[k][i].nex);// if (flag==1) {fl[k]=0; return;} //�и�����һ����ˣ�ע�����������
            }
   }
    fl[k]=0; //ȡ�������ı��
}

int main()
{ 
    int _=read(),m,n=0,w,x,y,z,k;
    while(_--)
	{
        For(i,1,n) mp[i].clear(); //���vector
        n=read(),m=read(),k=read();
        
		For(i,1,m)
		{ //�����ߣ������Ҫ��2��
            x=read(),y=read(),z=read();
            f.dis=z; f.nex=y; mp[x].push_back(f);
            f.nex=x; mp[y].push_back(f);
        }
        
        For(i,1,k)
		{ //�渺�ߣ�ע���Ȩȡ��
            x=read(),y=read(),z=read();
            f.dis=-z; f.nex=y; mp[x].push_back(f);
        }
        
        memset(sum,99999999,sizeof(sum)); //�������ݣ�������·����
        flag=0;
        For(i,1,n) {spfa(i); if (flag) break;} //û��ԭ�㣬����ÿ���㵱��ʼ����һ�飬�ҵ�һ���������˳�
        
		if (flag==1) printf("YES\n"); else printf("NO\n");
	    
    }
    return 0;
} 
