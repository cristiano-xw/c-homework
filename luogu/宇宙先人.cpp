#include<iostream>
#include<string>
using namespace std;
int main(void)
{   
    int n=0;
    cin>>n;
    int i=0;
    int man=0;
    string max;
    string put;
    
    for(i=1;i<=n;i++)
    {
    	cin>>put;
    	int l1=put.size();
    	int l2=max.size();
    	
    	if(l1>l2||l1==l2&&put>max)
    	{
    		max=put;
    		man=i;
		}
	}
	
	cout<<man<<endl<<max;
	
	
	return 0;
}
