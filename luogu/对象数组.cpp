


#include<iostream>
using namespace std;

class point 
{
	public:
		point();
		point(int x,int y);
		~point();
		void move (int newx,int newy);
		const int getx() {return x;}
		const int gety() {return y;}
		static void showcount();
	private:
	  int x,y; 
};

point::point()
{
	x=y=0;
	cout<<"default constructor called."<<endl;
}

point::point(int x,int y):x(x),y(y)
{
	cout<<"constructer called"<<endl;
}

point::~point()
{
	cout<<"destructer called"<<endl;
}            
                
void point::move(int newx,int newy)
{
	cout<<"moving the point to ("<<newx<<","<<newy<<")"<<endl;
	x=newx;
	y=newy;
}

int main()
{
	cout<<"entering main~"<<endl;
	point a[2];
	
	for(int i=0;i<2;i++)
	{
		a[i].move(i+10,i+20);
	}
	
	cout<<"exiting main~"<<endl;
	return 0;
}



