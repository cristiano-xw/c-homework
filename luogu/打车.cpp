#include<bits/stdc++.h>
using namespace std;

class shoufei
{
	public:
		char car;
		int ans;
		
		shoufei()
		{
			car='b';
		}
		
		void add(char a)
		{
			if(a=='b')
			{
				ans=ans+10;
			}
			if(a=='s')
			{
				ans=ans+5;
			} 
		}
		
		void show()
		{
			cout<<"��Ǯ"<<ans<<endl;
		}
};

int main()
{
	cout<<"��b��С��s,e����"<<endl;
	shoufei s;
	char t;
	while(cin>>t)
	{  
		s.add(t);
		s.show();
	}
	
	return 0;
}
