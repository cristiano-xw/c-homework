#include<iostream>
using namespace std;
long n,f[20][20];//f�����¼����
long dfs(int x,int y)//x�ǲ���������Ԫ�صĸ�����y��ջ��ĸ���
{
    if(x==0) return 1;  //������������û���ˣ���ֻ��һ�ַ�����
    if(f[x][y]!=0) return f[x][y];  //���仯���߹��ķ���ֱ�ӵ���
    if(y>0) f[x][y]+=dfs(x,y-1);   //ջ�ﲻΪ�յ�ʱ��ſ��԰�ջ���Ԫ���Ƴ�
    f[x][y]+=dfs(x-1,y+1);    //����������Ԫ�ؼ�һ��ջ��Ԫ�ؼ�һ
    return f[x][y];     //���ط���ֵ
}
int main()
{
    cin>>n;
    cout<<dfs(n,0)<<endl;
    return 0;
}
