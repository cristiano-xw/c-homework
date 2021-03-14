#include<iostream>
using namespace std;
//对复数进行运算，重载运算符 
class complex
{ 
	public:
		complex(double r=0.0,double i=0.0):real(r),imag(i){}
		complex operator+(const complex &c) const; 
		complex operator-(const complex &c) const;     
		void display() const;        
	private:      
		double real;
		double imag;
};
       
complex complex::operator+(const complex &c) const
{
	return complex(real+c.real,imag+c.imag);
}

complex complex::operator-(const complex &c) const
{
	return complex(real-c.real,imag-c.imag);
}

void complex::display()const
{
	cout<<"("<<real<<","<<imag<<")"<<endl;
} 

int main()
{
	complex c1(5,4),c2(2,10),c3;
	cout<<"c1="; c1.display();
	cout<<"c2="; c2.display();
	c3=c1-c2;
	cout<<"c3=c1-c2="; c3.display();
	c3=c1+c2;
	cout<<"c3=c1+c2="; c3.display();
	return 0;
}   
