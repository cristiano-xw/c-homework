#include<bits/stdc++.h>
using namespace std;
class point
{
	public:
		point():x(0),y(0)
		{
			cout<<"default constructor called."<<endl;
		}
		point(int x,int y):x(x),y(y)
		{
			cout<<"constructor called."<<endl;
		}
		
	~point(){cout<<"destructor called."<<endl;}
	int getx() const {return x;}
	int gety() const {return y;}
	void move(int newx,int newy)
	{
		x=newx; y=newy;
	}
	
	private:
		int x,y;
} ;

class arrayofpoints
{
	public:
		arrayofpoints(const arrayofpoints &v);
		arrayofpoints(int size):size(size)
		{
			points=new point[size];
		}
		~arrayofpoints()
		{
			cout<<"deleting..."<<endl;
			delete[]points;
		}
		
		point &element(int index)
		{
			assert(index>=0&&index<size);
			return points[index];
		}
	private:
		point*points;
		int size;
};

double average(const vector<double>&arr)
{
	double sum=0;
	for(int i=0;i<arr.size();i++)
	{
		sum+=arr[i];
	}
	
	return sum/arr.size();
}

int main()
{
	unsigned n;
	cout<<"n=";
	cin>>n;
	vector<double>arr(n);
	cout<<"please input"<<n<<"real numbers:"<<endl;
	for(int i=0; i<n;i++)
	{
		cin>>arr[i];
	}
	
	cout<<"average="<<average(arr)<<endl;
	return 0; 
}
