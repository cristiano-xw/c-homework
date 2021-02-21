#include<iostream>
#include<cstdio>
#include<stack>
#include<string>
using namespace std;
stack<char>s;
int num;

char trans(char a)
{
	if(a==')') return '(';
	if(a==']') return '[';
	if(a=='}') return '{'; 
}

int main()
{
	string p;
    getline(cin,p); 
	int i=0;
	for(i=0;i<p.size();i++)
	{ 
		if(s.empty())//如果是空栈;
		{
			s.push(p[i]);
			continue; //将p[i] 推入栈中 
		}
		if(trans(p[i])==s.top())
		{
			s.pop();
		}
		else s.push(p[i]); 
	} 
	if(s.empty()) printf("yes\n");
	else printf("no\n");
	return 0;
}
