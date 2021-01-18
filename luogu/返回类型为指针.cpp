#include<iostream>
char *buildstr(char c,int n); //返回类型为指针
int main(void)
{
	using namespace std;
	int times;
	char ch;
	cout<<"enter a character";
	cin>>ch;
	cout<<"enter a integer";
	cin>>times;
	char *ps=buildstr(ch,times);
	cout<<ps<<endl;
	delete[] ps;
	ps=buildstr('+',20);
	cout<<ps<<"-done-"<<ps<<endl;
	delete[]ps;
	return 0;
} 

char *buildstr(char c,int n)
{
	char * pstr=new char[n+1];
	pstr[n]='\0';
	while(n--)
	{
		pstr[n]=c;
	}
	return pstr;
}
