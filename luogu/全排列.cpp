#include <iostream>  
#include <algorithm>  
using namespace std;  
int main()  
{  
    char a[100];
	int n=0;
	scanf("%d",&n);
	int i=0;
	for(i=1;i<=n;i++)
	{
	  a[i]=i;	
	} 
	
	do
	{
		for(i=1;i<=n;i++)
		{
			printf("%5d",a[i]);
		}
		printf("\n");
	}while(next_permutation(a+1,a+n+1));
	return 0;
}  
