#include<stdio.h>
#include<string.h>
#include<math.h>
#include<malloc.h> 
int main(void)
{   
    int i=0;
	char **a;   //�����άָ�롣��Ŷ�ά�������ݡ� 
    int m;   //������
    scanf("%d", &m); //����������
    a = (char**) malloc(sizeof(char*) *(31)); //����һ��һάָ��ռ䡣
    for(i = 0; i <31; i ++) //�������ռ䣬��ΪҪ�ӳ� 
    a[i] = (char *)malloc(sizeof(int) * (2*m-1));  //����ÿ��һάָ�룬����һ�����ݵĿռ䡣a[i]��ָ���i�е�ָ�� 
    memset(a,' ',sizeof(a));
    
    int j=0;
    for(j=0;j<2*m-1;j++)
    {
    	a[15][j]='-';
	}
	
	int t=0;
	
	for(t=0;t<m;t++)
	{
		char r[100]="0"; //r��Ϊ���� 
		scanf("%s",r);
		int f=0;
		sscanf(r,"%d",&f); //�ж�Ϊ������Ϊ�� 
		
		if(f>0)  //���Ϊ���� 
		{
		   if(f<10) //Ϊ��λ��
		   {
		   	int l=0;
		   	l=strlen(r);
		   	if (l==1) //������ĸ 
		    {  
			int e=0;
			for(e=14;e>14-f;e--)
			{
				a[e][2*t]='+';  
			}
	     	}
	     	
	     	if(l==2)
	     	{
	     	int e=0;
			for(e=14;e>14-f;e--)
			{   
				sscanf(a[1],"%c",&a[e][2*t]);
			}
			}
		   } 
		   
		if(f>=10)
		{   
		    int l=0;
		   	l=strlen(r);
			if (l==2) //������ĸ 
		    {  
			int e=0;
			for(e=14;e>14-f;e--)
			{
				a[e][2*t]='+';  
			}
	     	}
	        if(l==3)
	     	{
	     	int e=0;
			for(e=14;e>14-f;e--)
			{
				sscanf(a[2],"%c",&a[e][2*t]);
			}
			}
		}
		   	
		} 
		
	int p=0,z=0;
	for(p=0;p<31;p++)
	for(z=0;z<2*m-1;z++)
	{
		printf("%s",a[p][z]);
	}
		
		 
	 
		
	}
	
}
