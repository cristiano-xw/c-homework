#include<cstdio>
#include<iostream>
using namespace std;
int cf[2000][2000];
int main()
{
    int n,m;
    int x1,y1,x2,y2;
    scanf("%d%d",&n,&m);
    while(m--)//ѭ������һ�ַ�ʽ��m==0ʱ�����Զ�����������ѭ��m�飩
    {
        scanf("%d%d%d%d",&x1,&y1,&x2,&y2);
        for(int i=x1;i<=x2;i++)//ÿһ�н��в�֣�ʱ�临�Ӷ�O(N)
        {
            cf[i][y1]++;
            cf[i][y2+1]--;//���
        }
    }
    
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)  
        {
            cf[i][j]+=cf[i][j-1];    //��ԭ������A[I]-A[I-1]=B[I]�������Ƶ�B[I]+A[I-1]=A[I]����ΪB[I-1]�ѱ���ԭΪA[I-1]�����Եõ��˵��ƹ�ʽ��
            printf("%d ",cf[i][j]); //��ԭ�����
        }
        printf("\n");//����
    }
    return 0;
}
