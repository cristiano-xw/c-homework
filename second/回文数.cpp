//����������һ��������(32λint���Դ����)�����ж����Ƿ�Ϊ��������
//˼·����ͨ��ÿ��������ʮ�õ����һλ��Ȼ�����һλ��Ϊ��һλ����һ�������У�ֱ��ԭ��������0. 
//��forѭ�����ñ�����������ѭ����������� 
#include <stdio.h>
int main()
{   
	int n=0;
	//printf("Please input numbers:\n ");
   // printf("how many times do you want to play\n");
    int m;
    scanf("%d",&n);
     
    int i=0;
    for(i=0;i<n;i++)
	{
	int s,y=0;
	int num = 0; 
	scanf("%d", &num);
	s=num;
	while(s>0)
	{
		y=y*10+s%10;
		s=s/10;
	}
	if(y==num)
	{
		printf("Yes\n", num);
		//num = 0;
	}
	else{
		printf("No\n", num);
		//printf("%d",y);
	//	num = 0;
	}
	
    }
} 
