#include <iostream>
using namespace std;

bool g=false;


template <class T>
void child(T a[],bool f[],int k,int n)
{
	int i;
	if(k==n){
		if(!g)
		{
			cout<<"¿Õ¼¯"<<endl;
			g=true;
		}
		for(i=0;i<=n;i++)
			if(f[i]==true)
				cout<<a[i]<<" ";
		cout<<endl;
		return;
	}
	f[k]=false;
	child(a,f,k+1,n);
	f[k]=true;
	child(a,f,k+1,n);
}
void main(){
	char a[4]={'a','b','c','d'};
	int b[5]={1,2,3,4,5};
	bool f[5]={false};
	cout<<a[0]<<a[1]<<a[2]<<a[3]<<endl;
	child(b,f,0,5);
	system("pause");
}


