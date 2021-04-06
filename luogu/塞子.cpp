#include<bits/stdc++.h>
using namespace std;

class s
{
	public:
		int n;
		s()
		{
			n=1;
		}
		void show(int i)
		{
			printf("第%d次结果",i);
		 
			int x=rand() % 6 + 2;
			cout<<x<<endl;
		}
		
};

int main()
{
	s d;
	srand((unsigned)time(0));  
	for(int i=1;i<=10;i++)
	{
		d.show(i) ;
	}
	return 0;
}
