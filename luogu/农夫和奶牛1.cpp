#include<bits/stdc++.h>
#include<string.h>
using namespace std;  
char m[12][12];//��ͼ
int f[3]={0,0,0},c[3]={0,0,0},ans,tdz;//ũ����ţ��������ר��ֵ
int zt[160005];

void move(int x,int y,int mi,int h)//h=0�ƶ�ũ��h=1�ƶ���ţ 
{  
    //�ƶ�����   
	if (mi==0)   
	{
		if (m[x][y-1]=='*') 
		if (h==0) 
		f[0]=1;  
		else c[0]=1;
		else if (h==0) f[2]--; 
		else c[2]--;
	}
	
    if (mi==1)
	{
		if (m[x+1][y]=='*') 
		if (h==0) f[0]=2; 
		else c[0]=2;
		
		else if (h==0) f[1]++;
	    else c[1]++; 
	}
	
    if (mi==2)
	{
		if (m[x][y+1]=='*') if (h==0) f[0]=3; else c[0]=3; 
		else if (h==0) f[2]++; else c[2]++;
	}
	
	if(mi==3) 
	{   
		if (m[x-1][y]=='*') if (h==0) f[0]=0; else c[0]=0;
		else if (h==0) f[1]--; else c[1]--;
	}
}

bool pd()
{   
    //�ж�ѭ����ֹ�����������ţ������ũ��������ȣ��������ص�������0���˳�ѭ��
	if (f[1]==c[1]&&f[2]==c[2]) 
	return 0;
	else return 1;
}


int main()
{   
    memset(zt,0,sizeof(zt));
	for (int i=0;i<=11;i++) 
	{
	m[i][0]='*',m[i][11]='*'; 
    }
	         
	for (int i=0;i<=11;i++) 
	{
    m[0][i]='*',m[11][i]='*';
    } 
    
    for (int i=1;i<=10;i++)
	{
    	for (int j=1;j<=10;j++)
		{
    		cin>>m[i][j];
    		if (m[i][j]=='F') f[1]=j,f[2]=i;
    		if (m[i][j]=='C') c[1]=j,c[2]=i;
		}  
	}
	
	
	
	while (pd())
	{      
		tdz=f[2]+f[1]*10+c[2]*100+c[1]*1000+f[0]*10000+c[0]*40000;
		printf("%d ",tdz);                          
		if (zt[tdz]==1)
		{   //��ѭ���˾����0����������
			cout<<0<<endl;
			printf("ok");
			return 0;
		}
		
		zt[tdz]=1;//���
		move(f[1],f[2],f[0],0);
		move(c[1],c[2],c[0],1);  //�����ƶ�ũ�����ţ 
		ans++; //��¼������
	}
	
	
	cout<<ans<<endl;//���
    return 0;
}
