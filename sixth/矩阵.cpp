//��һ��Ϊ����Ľ���N,�Լ�K�η���
//������N�У�ÿ����N�������ֱ��ÿո�ֿ����������A
//����1<=N,K<=7,�Ҿ���A��ÿ��Ԫ�� a����: 1<=a<=7��
#include<stdio.h>
int main(void)
{
	int n=0; int k=0;
	scanf("%d%d",&n,&k);
	long int a[10][10]={0}; //�洢����
	long int c[10][10]={0};
	long int b[10][10]={0};
	int i=0; int j=0;
	
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n;j++)
		{
			scanf("%ld",&a[i][j]);
		}
	}   //�������
	
	/*for(i=1;i<=n;i++)
	{
		for(j=1;j<=n;j++)
		{
		printf("%d",a[i][j]);
		}
		printf("\n");
	}   //�������*/
	
	
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n;j++)
		{
		  c[i][j]=a[i][j];   
		}
	}   //�ı����c���� 
	
	/*for(i=1;i<=n;i++)
	{
		for(j=1;j<=n;j++)
		{
		printf("%d",c[i][j]);
		}
		printf("\n");
	}   //�������*/
	
	
	
	
	int t=0;
	for(t=0;t<k-1;t++)
	{
     
    int i=0,j=0,e=0;
     for( i=1;i<=n;i++){
		for( j=1;j<=n;j++){
			for( e=1;e<=n;e++){  
				b[i][j]+=c[i][e]*a[e][j];      
			}
		}
	}
	
	//����˷��ĸ��룬���ڸ�λ�õ�ֵΪa��i����j�� ���ǵ�i�д������ҵ������Ե�j�д������µ��� 
	//�����������������˵������� ��һ��������е��ڵڶ���������� 
	for(i=0;i<=n;i++)
	{
		for(j=0;j<=n;j++)
		{
			c[i][j]=b[i][j];
		}
	}
	
	if(t<k-2)
	{
	for(i=0;i<=n;i++)
	{
		for(j=0;j<=n;j++)
		{
			b[i][j]=0;
		}
	}
   }
	
	
	
   }
  
  
    for(i=1;i<=n;i++)
    {
    	for(j=1;j<=n;j++)
    	{
    		printf("%ld ",b[i][j]); 
		}
		printf("\n");
	}
	
	 return 0;
	
	
	
}
