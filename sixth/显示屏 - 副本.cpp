#include<stdio.h>
#include<string.h>
#include<math.h>
int main(void)
{  
	char a[10][50]={
	               "XXX..XXXXXXXX.XXXXXXXXXXXXXXXX",
                   "X.X..X..X..XX.XX..X....XX.XX.X",
                   "X.X..XXXXXXXXXXXXXXXX..XXXXXXX",
                   "X.X..XX....X..X..XX.X..XX.X..X",
                   "XXX..XXXXXXX..XXXXXXX..XXXXXXX"} ; //������һͬ���룬���Ǻ�����ÿ�����������ɺ��. 
                   //ÿ��������������
    double n=0;
	scanf("%lf",&n);//�������ֵĳ���
	int i=0;
	 double b=0;
	scanf("%lf",&b);
	
	int j=0;  int x=0;
	char c[5][10000];
	
		int m=0;
		for(i=0;i<5;i++)
		{
			for(j=0;j<n;j++) //����һλһλ�����
			{
				int k=0;
				k=(int)(b/pow(10,n-j-1))%10; 
			    int l=0;  
				for(x=k*3;x<k*3+3;x++)
				{
					c[i][j*4+l]=a[i][x];  
					l++;                           
				}
				if(j*4+3<=(n-1)*4+3)
				{
					c[i][j*4+3]='.';  
				}
				
			} 
		}
		
		for(i=0;i<5;i++)                                         
		{
			for(j=0;j<(n-1)*4+3;j++)
			{
				printf("%c",c[i][j]);       
			}
			printf("\n");
		}
	
}
