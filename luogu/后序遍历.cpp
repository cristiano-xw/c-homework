#include<bits/stdc++.h>  //万能头文件
using namespace std;
string a,b;   //把中前遍历当做字符串输入
void houxu(int x,int y,int p,int q) 
{  //x~y为前序遍历 p~q为中序遍历
    if(x>y||p>q) return ;//规定边界条件
    else
	 {
        int i=b.find(a[x]);   //利用根左右的特性来在中序队列中查找
    houxu(x+1,x+i-p,p,i-1);      //递归左子树
    houxu(x+i-p+1,y,i+1,q);    //递归右子树
    cout<<a[x];
     }   
}
int main()
{
    cin>>b>>a;//反一下输入
    int l=a.length()-1;//因为是0开始，所以要减一
    houxu(0,l,0,l);//递归
    return 0;
}
