#include<bits/stdc++.h>
using namespace std;

string digui()
{
	string s="";//最终形态 
	string d="";//过度态
	int k=0;//读取重复次数 
	char str;//每个字符依次判断 
	
	while(cin>>str)//读取
	{
		if(str=='[') //开头 
		{               
			cin>>k;
			d=digui();
			
			while(k--)
			{
				s+=d;  //将字符串复制到末尾 
			}
		}
		
		if(str==']')
		{
			return s;  //返回上一层 回到上一个s的值 
		} 
		
		if(str!='[')  
		{
			s+=str;   //s再每一次都会被 重新初始化 然后将d的值改变 
		}
		
	} 
}

int main(void)
{
	cout<<digui();
	return 0;
}
