#include<bits/stdc++.h>
using namespace std;
char a[99999]="";
char s[100]="";
int main(void)
{
	memset(a,0,sizeof(a));
	cin>>s;//��һ����ʼֵ
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
	
	long long int d=0;//������2lΪ���ڵ�ѭ��
	
	d=b%(2*l);
	
	//printf("%d\n",d);
	printf("%c",a[d-1]); 
	return 0;
}
