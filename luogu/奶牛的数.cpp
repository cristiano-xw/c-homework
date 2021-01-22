#include<bits/stdc++.h>
using namespace std;
char a[99999]="";
char s[100]="";
int main(void)
{
	memset(a,0,sizeof(a));
	cin>>s;//给一个初始值
	long long int b=0; cin>>b;
	
	int l=0; l=strlen(s);
	//printf("%d",l);
	int i=0;
	
	while(i<10)  
	{
	   strcat(a,s);
	   strrev(s);
	   i=i+l;
	}
	
	printf("%s\n",a);
	
	long long int d=0;//存在以2l为周期的循环
	
	d=b%(2*l);
	
	//printf("%d\n",d);
	printf("%c",a[d-1]); 
	return 0;
}
