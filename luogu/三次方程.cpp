//�����˼·�Ƕ��ַ� �����������Զ������
#include<bits/stdc++.h>
using namespace std;
double a=0; double b=0; double c=0; double d=0;
double f(double x)
{
	return a*x*x*x+b*x*x+c*x+d;             
}

int main()
{
	scanf("%lf%lf%lf%lf",&a,&b,&c,&d);
	double x1=0; double x2=0;
	double i=0;int ans=0;
	for(i=-100;i<100;i++)//�����������Ĳ�ֵ����1 
	{
		double l=i;
		double r=i+1;
		x1=f(l);//��ֵ
		x2=f(r);//��ֵ
		if(x1==0)
		{
			printf("%.2lf ",l);//�ж���ֵ��� 
			ans++;
			continue;
		} 
		
		if(x1*x2<0)
		{  
			while(r-l>=0.001)
			{
				double m=(l+r)/2;
				double fm=f(m);
				if(fm*f(l)<0)
				{
					r=m;
				}
				if(fm*f(r)<0)
				{
					l=m;
				}
			}
			printf("%.2lf ",l);
			ans++;
		}
		
		if(ans==3)
		{
			return 0;
		}
	}
	return 0;
} 
