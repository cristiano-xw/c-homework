#include<stdio.h>
#include<math.h>
                   
char a[111][111]={ "*****      *  *****  *****  *   *  *****  *****  *****  *****  *****  ", 
                   "*   *      *      *      *  *   *  *      *          *  *   *  *   *  ",
                   "*   *      *      *      *  *   *  *      *          *  *   *  *   *  ",
                   "*   *      *  *****  *****  *****  *****  *****      *  *****  *****  ",
                   "*   *      *  *          *      *      *  *   *      *  *   *      *  ",
                   "*   *      *  *          *      *      *  *   *      *  *   *      *  ",
                   "*****      *  *****  *****      *  *****  *****      *  *****  *****  " };
                  //ÿ�����ֺ��涼�������ո�

int main(void)
{
	int k=0;
	scanf("%d",&k);
	int i=0;
	for(i=0;i<k;i++)
	{
		int s=0;
		scanf("%d",&s);//���s�Ĵ�С
		printf("%d:",s);
		printf("\n");
		int l=0;
		int u=0;
		u=s;
		while(u>0)
		{
		u=u/10;
		l++;	//�ж�λ�� 
		} 
		
		//printf("%d",l);
		
	    int j=0;
	    int h=0;
	    for(h=0;h<7;h++)
	    {
	    	
	    for(j=0;j<l;j++)
	    {
	    	int t=0;
	    	t=(int)(s/pow(10,l-j-1))%10;
	    	//printf("%d\n",t);
	    	int g=0;
	    	for(g=t*7;g<t*7+7;g++)
	    	{
	    		printf("%c",a[h][g]);
			}
			
		}
		printf("\n");
		
	    }
	    
	    
		 
	}
	
	return 0;
}




