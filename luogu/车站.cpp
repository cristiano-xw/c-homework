#include<iostream>
#include<cstdio>
#include<cstring>
#define ZYS 1005
using namespace std;
int n,m,ans,st[ZYS],s,tuopu[ZYS][ZYS],de[ZYS],tt[ZYS],top;
bool is[ZYS],bo[ZYS];			//��andyzys���е����������鷶Χ
int main() {
    scanf("%d %d",&n,&m);
    for(int i=1;i<=m;i++) {
        memset(is,0,sizeof(is));//is��ʾ�Ƿ���ͣ��վ
        scanf("%d",&s);
        for(int j=1;j<=s;j++)
            scanf("%d",&st[j]),is[st[j]]=true;
        for(int j=st[1];j<=st[s];j++)
            if(!is[j])			//ö��վ�㣬��������ͣ���ľ�С������ͣ��վ�ĵȼ�
                for(int k=1;k<=s;k++)	//ö����ͣ��վ��
                    if(!tuopu[j][st[k]]) tuopu[j][st[k]]=1,de[st[k]]++;//tuopu[i][j]��ʾj>i�ļ�������
    }
    
    do{
        top=0;
        for(int i=1;i<=n;i++)
            if(de[i]==0&&!bo[i]) {
                tt[++top]=i,bo[i]=true;//��ʼ������Ϊ0�ĵ�ɾ��
            }
        for(int i=1;i<=top;i++)
            for(int j=1;j<=n;j++)
                if(tuopu[tt[i]][j]) tuopu[tt[i]][j]=0,de[j]--;//ȥ��ȥ��
        ans++;
    } while(top);
    printf("%d",ans-1);//���һ��ʲô�㶼û�л����һ�Σ�������⣩
    return 0;
}
