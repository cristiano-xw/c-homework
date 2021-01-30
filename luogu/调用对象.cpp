#include<bits/stdc++.h>
using namespace std;
class clock
{
	public:
		clock();
		void settime(int newh,int newm,int news);
		void showtime();
	private:
		int hour ;int minute;int second;
};

clock::clock():hour(0),minute(0),second(0){}

void clock::settime(int newh,int newm,int news)
{
	hour=newh;
	minute=newm;
	second=news;               
	
} 

void clock::showtime()
{
	cout<<hour<<":"<<minute<<":"<<second<<endl;
}


int main()
{  
    clock globclock;
	cout<<"first time output:"<<endl;
	globclock.showtime();
	globclock.settime(8,30,30)
	clock myclock(globclock);
	cout<<"second time output"<<endl;
	myclock.showtime();
	return 0;
}
