#include<stdio.h>
#include<string.h>
int f[5000];
void add(int shu,int t)//����׳˺͵ĸ߾���
{        
        f[t]=f[t]+shu;
        f[t+1]=f[t+1]+f[t]/10000;
        f[t]=f[t]%10000;
}


int main()
{  
   int n=0;
   scanf("%d",&n);
   int a[5000] ;
   int i,j,k;
  
  a[1]=1;k=1;           //��ʼ���׳˺����鳤�ȣ���1��ʼ
  for(i=1;i<=n;i++)  
  {  
  for(j=i;j<=k;j++)    //�׳ˣ�����ÿ�����ֶ���һ�º�һ��ˣ�Ч��һ������������ÿ�����ˣ�
     a[j]=a[j]*i;
     
	 for(j=1;j<=k;j++)//����׳˽�λ�ǵĸ߾���
     {  
	   a[j+1]=a[j+1]+a[j]/10000;
       a[j]=a[j]%10000;
     }
     if(a[k+1]>0) k++; //�������4Ϊ������+1
     
	 for(int j=1;j<=k;j++)  //�߾�������˵��ע��Ҫ�ڳ��ȱ仯�����㣩
     add(a[j],j); 
  }
  
  
  for(j=k;j>=1;j--)//�������
  printf("%04d",f[j]);//ע��Ҫ����
  return 0;//��������
}
 
