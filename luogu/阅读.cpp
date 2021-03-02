#include <cstdio>
#include <algorithm>
#include <cmath>
#include <cstring>
#include <iostream>
using namespace std;
char s[10010];
int nex[500010][26],n,cnt=0;
bool b[500010][110];
inline int read()
{
    int k=0,f=1;char ch=getchar();
    while(ch<'0'||ch>'9')
	{
		if(ch=='-')
			f=-1;
		ch=getchar();
	}
    while(ch>='0'&&ch<='9')
	{
		k=k*10+ch-'0';
		ch=getchar();
	}
    return k*f;
}
inline void insert(int x)
{
    scanf("%s",s+1);
	int l=strlen(s+1);
    int now=0;
    for(int i=1;i<=l;i++)
	{
        int p=s[i]-'a';
        if(!nex[now][p])         //���$Trie$����û��������ʵ�ǰ׺�ͽ��б��
			nex[now][p]=++cnt;   //������˵���ı�� 
        now=nex[now][p];         //��������һ�㣬�������ڵ�λ�� 
    }
    b[now][x]=1;                 //��������ڵ�x�г�����
}
inline void check()
{
    scanf("%s",s+1);
	int l=strlen(s+1);
    int now=0,flag=1;
    for(int i=1;i<=l;i++)
	{
        int p=s[i]-'a';
        if(!nex[now][p])         //�����Trie����û�е�ǰ���ַ����Ϳ���ֱ��break���� 
		{
			flag=0;
			break;
		}
        now=nex[now][p];         //����͸���λ�� 
    }
    if(flag)
		for(int i=1;i<=n;i++)    //������˵���ֵ������ 
			if(b[now][i])
				printf("%d ",i); //�������Щ�����г��ֹ� 
    puts("");                    //�൱��printf("\n");��ʵ������������׿�������һ��Ҫע�Ⱑ���� 
}
int main()
{
    n=read();
    for(int i=1;i<=n;i++)
	{
        int x=read();
        for(int j=1;j<=x;j++)    //һ������һ�����ʵĲ���Trie���� 
			insert(i);
    }
    int m=read();
    for(int i=1;i<=m;i++)
		check();
    return 0;
}
