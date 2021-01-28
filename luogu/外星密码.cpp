#include<bits/stdc++.h>//万能头棒棒哒
using namespace std;
string yunqian(){
    int k;//压缩的次数
    char str;//输入的字符
    
    string s="",d="";//s是最终答案，d是被压缩的字串，别忘了初始化
    /*注意：str,s,d应该定义在函数内部，才能在每次递归中初始化，否则会导致一堆RE，可能还有几个MLE，总之没法AC，我就因为这个错了好几回*/
	while(cin>>str){//不断输入字符
		if(str=='['){//如果找到了被压缩的字串
			cin>>k;//输入压缩次数
			d=yunqian();//递归调用
			cout<<"ok "<<d<<endl;
			cout<<"  "<<s<<endl;
			
			while(k>0)
			{ 
				s+=d;//把解压后的字串复制k次后添加到原来的字符串上
				k--;
			}
		}
	    if(str==']')
		{   cout<<"this "<<s<<endl;                    //如果找到了压缩的字串的末尾
			return s;//结束这一层递归并返回已经被解压的字串
		}
		if(str!='[')
		{//如果没有被压缩
			s+=str;//直接在最后添上这个字符。
			printf("1\n");
		}
	}
}
int main(){
	cout<<yunqian();
	return 0;//完结撒花～
}
