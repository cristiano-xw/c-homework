#include<iostream>
using namespace std;

class complex
{
	public:
		complex(double r=0.0,double i=0.0) :real(r),imag(i){}
		friend complex operator+(const complex &c1,const complex &c2);
		friend complex operator-(const complex &c1,const complex &c2);
		friend ostream &operator<<(ostream &out,const complex &c);
	private:
		double real;
		double imag;
};

complex operator+(const complex &c1,const complex &c2)
{
	return complex(c1.real+c2.real,c1.imag+c2.imag);
}

complex operator-(const complex &c1,const complex &c2)
{
	return complex(c1.real-c2.real,c1.imag-c2.imag);
}

ostream &operator<<(ostream &out,const complex &c)
{
	out<<"("<<c.real<<","<<c.imag<<")";
	return out;
}

int main()
{
	complex c1(5,4),c2(2,10),c3;
	cout<<"c1="<<c1<<endl;
	cout<<"c2="<<c2<<endl;
	c3=c1-c2;
	cout<<"c3=c1-c2"<<c3<<endl;
	c3=c1+c2;
	cout<<"c3=c1+c2"<<c3<<endl;
	return 0;
}


