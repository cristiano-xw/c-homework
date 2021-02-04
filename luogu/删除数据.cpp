#include<bits/stdc++.h>
using namespace std;
int main()
{
    char a[300];
    memset(a,0,sizeof(a));
    cin>>a;
    int l=0; 
    l=strlen(a);
    
    int k=0; cin>>k;
    sort(a,a+l);
    
    int i=0; int v=0;int as=0;
    
    for(i=0;i<=l-k-1;i++) 
    {   
        while(a[i]=='0'&&v==0)
        {
        	i++;
		} 
		v=1;
		if(i<=l-k-1)
		{
    	printf("%c",a[i]);
    	as=1;
        }
        if(as==0)
        {
        	cout<<0;
		}
	}
	
    return 0;
}
