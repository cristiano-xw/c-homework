//有一个r行c列(1<=r,c<=50)的电子表格，行从上到下编号为1~r，列从左到右编号是1~c。
//l  SR x1 x2
//交换x1行和x2行
#include<stdio.h>
#include<string.h>

int main(void)
{
	int r ,c,i;int iq=0;
	scanf("%d%d",&r,&c);
	char a[r+2][c+2]={0};
	for (i=0;i<r;i++)
	{
		scanf("%s",a[i]);  //初始化数组 二维数组的某一行就是一个一维数组 
	}
	
	int n=0;
	printf("how many commands are there\n");
	scanf("%d",&n);
	
	for(i=0;i<n;i++)
	{
	char s[100]="0";
	scanf("%s\n",s);
	
	
	if(strcmp(s,"SR")==0)
	{
	int m=0,q=0;
	char b[100];
	scanf("%d%d",&m,&q);
	strcpy(b,a[m]);
	strcpy(a[m],a[q]);
	strcpy(a[q],b);
	continue; 
	} //交换特定某一行 
	
	if(strcmp(s,"SC")==0)
	{
		int m=0,q=0;int k;
		scanf("%d %d",&m,&q);
		int i=0;
	for(i=0;i<r;i++)
	{
		k=a[i][m];
		a[i][m]=a[i][q];
		a[i][q]=k;
	}
	continue;
   }//交换某一列
   
    if(strcmp(s,"DR")==0)
    {   
	    int f=0;
    	//printf("你要删哪一行\n");
    	int m=0;
    	scanf("%d",&m);
        for (f=m;f<r;f++)
    	{  
		     //printf("1\n");
    		strcpy(a[f],a[f+1]);
    		iq=iq+1;
		}
		continue;	 
	} //删去某一行 
	
	if(strcmp(s,"DC")==0)
	{
	  int f=0;
	  int m=0;
	  int y=0;
	  int x=0;
	  //printf("你想删除哪一列\n");
      scanf("%d",&m);
      //从第一行开始
      for(y=0;y<r;y++)
	  {  //printf("k\n");
	  for(x=m;x<c;x++)
	  {
	  	a[y][x]=a[y][x+1]; 
	  }
     } continue;
	
	}// 交换某一列 
	
}
	
	for (i=0;i<r;i++)
	{
		printf("%s\n",a[i]);
	}
	return 0; 
	
	
	
 
}
