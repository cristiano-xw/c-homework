#include<stdio.h>
#include<string.h>     /*�������õ����ַ������������˴�Ҫ���ϴ�������*/
int main()
{
 long b;
 int i,i1,i2,j,k,n,N,t=0,a[256];
 char s[128];
 printf("please input a large number:\n");
 scanf("%s",s);
 for(i=0;i<=255;i++)
 {
 a[i]=0;
 }                    /*��ʼ������a*/
 n=strlen(s);        /*������s�ĳ��ȸ���n*/
 for(i1=0,k=n-1;i1<n;i1++,k--)   /*����ѭ�����ư�λ�������*/
 {
  for(i2=0,j=n-1;i2<n;i2++,j--)
  {
  i=i1+i2;
   b=a[i]+(s[k]-48)*(s[j]-48)+t;
   a[i]=b%10;
   t=b/10;
  }
  while(t>0)
  {i++;
   a[i]=a[i]+t%10;
   t=t/10;
  }              /*�������λ�н�λ�����*/
  N=i;
 }
 printf("\n the result is: \n ");
 for(i=N;i>=0;i--)
 {printf("%d",a[i]);
 }                    /*���Ӹ�λ����λ��˳��������*/
 getch();
}
