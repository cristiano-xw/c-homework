#include<bits/stdc++.h>
using namespace std;
int n,pd[100],used[100];//pd���ж��Ƿ��ù������
void print()//�������
{
    int i;
    for(i=1;i<=n;i++)
    printf("%5d",used[i]);//������λ����
    cout<<endl;
}
void dfs(int k)//���Ѻ�������ǰ�ǵ�k��
{
    int i;
    if(k==n) //�����˵�ʱ��
    {
        print();//�����ǰ��
        return;
    }
    for(i=1;i<=n;i++)//1-nѭ������
    {
        if(!pd[i])//�����ǰ��û���ù�
        {
            pd[i]=1;//���һ��
            used[k+1]=i;//���������������
            dfs(k+1);//����һ��
            pd[i]=0;//����
        }
    }
}
int main()
{
    cin>>n;
    dfs(0);//ע�⣬�����Ǵӵ�0��ʼ�ģ�
    return 0;
}
