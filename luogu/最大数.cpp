#include<stdio.h>
#include<iostream>
using namespace std;
int main(void)
{
    string a[22];
    int n=0;
    cin>>n;
    int i=0;
    for(i=1;i<=n;i++)
    {
    	cin>>a[i]; //���ַ�������ʽ�洢������ 
	}
	
	//for(i=1;i<=n;i++)
	//{
	//	cout<<a[i]<<endl;
	//}
	int l[22];
	for(i=1;i<=n;i++)
	{
		l[i]=a[i].size();
		//cout<<l[i]<<" ";
	} 
	
	int j=0;
	for(i=1;i<=n-1;i++)
	{
		for(j=i+1;j<=n;j++)
		{
			if(l[i]>=l[j]&&a[i]<a[j])//�Ƚϴ�С 
			{
				string s;
				s=a[j];
				a[j]=a[i];
				a[i]=s;
				//cout<<"ok"<<" ";
			}
			
			if(l[i]>=l[j]&&a[i][l[j]]<a[j][l[j]-1])//�Ƚϴ�С 
			{
				string s;
				s=a[j];
				a[j]=a[i];
				a[i]=s;
				//cout<<"ok"<<" ";
			}
			
			
			
			if(l[i]<l[j]&&a[i]<a[j])
			{
				if(a[j][l[i]]>a[i][l[i]-1])   
				{
				string s;
				s=a[j];
				a[j]=a[i];
				a[i]=s;
				}
			}
			
		}
	}
	
	for(i=1;i<=n;i++)
	{
		cout<<a[i];
	}
	
	return 0;
}
