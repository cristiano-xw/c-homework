#include<bits/stdc++.h>  
using namespace std;
int n,k,rest,t=1,minn,cnt=0; 
bool flag=0;
char a[260]; 
int main()
{
    memset(a,0,sizeof(a));
    int i=1;
    
    while(a[i-1]!='\n')
    {
    	scanf("%c",&a[i]);
    	i++;
	}
	n=i-3; //���� 
	
	 
	cin>>k;
	
    rest=n-k;
    
    while(cnt<rest)
	{
        minn=t; 
        for(int i=t;i<=k+t;i++) 
		if(a[minn]>a[i])minn=i;//����С��Ȼ����� 
		   
        if(a[minn]) flag=1;//���ϱ�� ���ұ�֤��������ݲ�Ϊ0  
        
        if(flag)    
		cout<<a[minn];
        k-=minn-t;  // ���ȼ�ȥɾȥ���� 
        t=minn+1;  //���������С����ʼ   
        cnt++;//�������  
    }
    
    if(!flag)cout<<0;  
    
    return 0;
}
