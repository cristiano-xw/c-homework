#include<stdio.h>
#include<string.h>
#include<math.h>
int main(void)
{
	int a=0;
	int b=0;
	int c=0; //����������ֱ�洢����ʱ��
	//һ��ʱ���ַ�������ʽΪAA/BB/CC
	//:MM/DD/YY����YY/MM/DD.
	scanf("%d/%d/%d",&a,&b,&c);//��ÿ�����ִ洢������ʡȥ0��
	//January, February, March, April, May, June, July, August, September, October, November �� December
	
	
	if(a>=13)      //ֻ�����ǵڶ��� YY/MM/DD. 
	{
		if(b==1)
		{
			printf("January ");
		}
		
		if(b==2)
		{
			printf("February ");
		}
		
		if(b==3)
		{
			printf("March ");
		}
		
		if(b==4)
		{
			printf("April ");
		}
		
		if(b==5)
		{
			printf("May ");
		}
		
		if(b==6)
		{
			printf("June ");
		}
		
		if(b==7)
		{
			printf("July ");
		}
		
		if(b==8)
		{
			printf("August ");
		}
		
		if(b==9)
		{
			printf(" September ");
		}
		
		if(b==10)
		{
			printf("October ");
		}
		
		if(b==11)
		{
			printf("November ");
		}
		
		if(b==12)
		{
			printf("December ");
		}
		
		printf("%d",c);
		printf(", ");
		printf("20%d",a); 
	}
	
		//:MM/DD/YY����YY/MM/DD.
	if(b>=13)
	{
			if(a==1)
		{
			printf("January ");
		}
		
		if(a==2)
		{
			printf("February ");
		}
		
		if(a==3)
		{
			printf("March ");
		}
		
		if(a==4)
		{
			printf("April ");
		}
		
		if(a==5)
		{
			printf("May ");
		}
		
		if(a==6)
		{
			printf("June ");
		}
		
		if(a==7)
		{
			printf("July ");
		}
		
		if(a==8)
		{
			printf("August ");
		}
		
		if(a==9)
		{
			printf(" September ");
		}
		
		if(a==10)
		{
			printf("October ");
		}
		
		if(a==11)
		{
			printf("November ");
		}
		
		if(a==12)
		{
			printf("December ");
		}
		
		printf("%d",b);
		printf(", ");
		printf("20%d",c); 
	}
	
	
	
	
	
	
	
	
	
	if(a<=12&&b<=12)  //���ֶ��� 
	{    
	
        if(c==a)//��ͬһ��
		{
			if(a==b)//��ͬһ��
			{
				printf("%d",abs(b-c));
				return 0;
			} 
		} 
		
		
	    int sum=0;
		int max=0;
		int min=0;
		if(a>c)
		{
			max=a;
			min=c;
		}
		
		if(a<c)
		{
			max=c;
			min=a;
		}
		
		int j=0;int k=0; //��������  ֻ������ʼ����ֹ���֮��� 
		for(j=min+1;j<max;j++)
		{
			int v=0;
			v=2000+j;
			if(v%4==0)
			{
				k++;
			}
		}
		
		if((max-min-1)>=0)
		{
			sum=(max-min-1)*365+k;//������ݵ�ʱ������ֻ���������ꡣ 
		}
		
		
		
		
		
		
	}
	
	 
	
	
	return 0;
	
	
	 
	
	
	
}
