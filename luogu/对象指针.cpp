#include<iostream>
using namespace std;

class point 
{
	public:
		point(int x=0,int y=0):x(x),y(y){}
		int getx()const {return x;}
		int gety()const {return y;}
	private:
	int x,y; 
} ;

int main()
{
	point a(4,5);
	point*p1=&a;
	cout<<p1->getx()<<endl;
	cout<<a.getx()<<endl;
	return 0;
}
