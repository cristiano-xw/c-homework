#include<cstdio>
using namespace std;
int w,n,t,ans,s[100010];
int main()
{
    scanf("%d%d%d",&w,&n,&t);  //w��Ϊ��·���ȣ�nΪԭ��·������tΪ������·������
    for(int i=1;i<=n;i++)
    scanf("%d",&s[i]);
    int l=0,r=w;  //���ֻ�����·��
        
		while(l<=r) 
		{  
        int mid=(l+r)/2,flag=0,k=0;  //����flag����ģ��·�꣬kΪ����·������
        
		for(int i=1;i<=n;i++)
		{     
            while(s[i]-flag>mid)
            flag+=mid,k++;  //�����·����룬���տ�ָ������mid��������һ��·�ꣻ
            if(k>t) break;  //������ӵ�·�����Ѿ�����t��ֱ���˳�ѭ����
            if(flag<s[i]) flag=s[i];
        }
        
        /*while(w-flag>mid)
        flag+=mid,k++;  //�����˵�·�յ㻹��·�ꣻ*/
        
		if(k>t) l=mid+1;
        
		else r=mid-1,ans=mid;  //������·���ý����˰ɣ�
    }
    printf("%d",ans);return 0;  //ans�������𰸣�
}
