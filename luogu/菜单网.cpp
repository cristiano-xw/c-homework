#include<iostream>
using namespace std;
int n,kind=0,m1[10000][10],m2[10];
void peiliao(int total,int a){
    if (a==10){
        if (total==n) {
            for (int j=0;j<10;j++) m1[kind][j]=m2[j];//����Ҫ�������~~ 
            kind++;
        }
    }
    
    if(total<n)
    {
      for (int i=1;i<=3;i++)
	  {
          m2[a]=i;
          peiliao(total+i,a+1);//��ʵ���ʮ��forûʲô���𡣡��� 
      }
    }
}
int main(){
    cin>>n;
    peiliao(0,0);
    cout<<kind<<endl;
    for (int j=0;j<kind;j++){
      for (int i=0;i<10;i++) cout<<m1[j][i]<<" "; //���һ��Ҫ�ǵô�ո�... 
     cout<<endl; 
    }
    return 0;
}
