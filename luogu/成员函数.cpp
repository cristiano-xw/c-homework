#include<bits/stdc++.h>
using namespace std;

class point
{
	public:
		point(int x=0,int y=0):x(x),y(y){
			count++;
		}
	point (point &p)
	{
		x=p.x;
		y=p.y;
		count++;
	}
	~point(){count--;}
	int getx(){return x;}
	int gety(){return y;}
	
	void showcount()
	{
		cout<<"object count="<<count<<endl;
	}
	private:
		int x; int y;
		static int count;
};

int point::count=0;
int main()
{
	point a(4,5);
	cout<<"point a: "<<a.getx()<<","<<a.gety();
	a.showcount();
	point b(a);
	cout<<"point b: "<<b.getx()<<", "<<b.gety();
	b.showcount();
	return 0;
}
