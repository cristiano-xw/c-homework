#include<stdio.h>
#include<string.h>
#include<math.h>
#include<malloc.h> 
int main(void)
{   
    int i=0;
	char **a;   //定义二维指针。存放二维数组数据。 
    int m;   //列数。
    scanf("%d", &m); //输入列数。
    a = (char**) malloc(sizeof(char*) *(31)); //申请一组一维指针空间。
    for(i = 0; i <31; i ++) //多分配个空间，因为要加长 
    a[i] = (char *)malloc(sizeof(int) * (2*m-1));  //对于每个一维指针，申请一行数据的空间。a[i]是指向第i行的指针 
    memset(a,' ',sizeof(a));
    
    int j=0;
    for(j=0;j<2*m-1;j++)
    {
    	a[15][j]='-';
	}
	
	int t=0;
	
	for(t=0;t<m;t++)
	{
		char r[100]="0"; //r作为过渡 
		scanf("%s",r);
		int f=0;
		sscanf(r,"%d",&f); //判断为正还是为负 
		
		if(f>0)  //如果为正数 
		{
		   if(f<10) //为个位数
		   {
		   	int l=0;
		   	l=strlen(r);
		   	if (l==1) //不带字母 
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
			if (l==2) //不带字母 
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
