#include<iostream>  
#include<cstdio>  
#include<cmath>  
using namespace std;   
int n,minl,maxl,f1[300][300],f2[300][300],num[300];  
int s[300];  
inline int d(int i,int j){return s[j]-s[i-1];}  
//ת�Ʒ��̣�f[i][j] = max(f[i][k]+f[k+1][j]+d[i][j];
int main()  
{   
    scanf("%d",&n);  
    for(int i=1;i<=n;i++)  //�ðɣ�������ʱ�俴����������������Ҷ�������������ģ�����ͳһ����һ�£���Ϊ��һ������������Ҫ����������ö�ٷֽ��ߣ����϶������� 
    {  
        scanf("%d",&num[i]);  
        num[i+n]=num[i];  //���� 
    }
    
    for(int i=1;i<=2*n;i++)
	s[i]=s[i-1]+num[i];  //���ǰ׺�� 
	
    for(int p=1;p<n;p++)  
    {  
        for(int i=1,j=i+p;(j<n+n) && (i<n+n);i++,j=i+p)  
        {  
            f2[i][j]=999999999;  
            for(int k=i;k<j;k++)  
            {  
                f1[i][j] = max(f1[i][j], f1[i][k]+f1[k+1][j]+d(i,j)); //i��j�ϲ��Ժ�����÷� �ټ���ǰ׺�� 
                f2[i][j] = min(f2[i][j], f2[i][k]+f2[k+1][j]+d(i,j));  
            }  
        }  
    }  
    
    minl=999999999;  
    for(int i=1;i<=n;i++)  
    {  
        maxl=max(maxl,f1[i][i+n-1]);  
        minl=min(minl,f2[i][i+n-1]);  
    }  
    printf("%d\n%d",minl,maxl);  
    return 0;  
}   
