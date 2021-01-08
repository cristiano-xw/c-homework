#include<stdio.h> 
#include<malloc.h> 
#include<string.h> 
int main()
{
    char **a;   //定义二维指针。存放二维数组数据。 
    int r, c;   //行数和列数。
    int i,j;
    int sum=0;
    int qwe=0;
    int hum=0;
    int l=0;
     
    scanf("%d%d", &r, &c); //输入行数和列数。
     
    a = (char**) malloc(sizeof(char*) *(r+3)); //申请一组一维指针空间。
    for(i = 0; i <r+1; i ++) //多分配个空间，因为要加长 
    a[i] = (char *)malloc(sizeof(int) * (c+2));  //对于每个一维指针，申请一行数据的空间。a[i]是指向第i行的指针 
     
    for(i = 0; i < r; i ++)  
        for(j = 0; j < c; j ++)
            scanf("%d",&a[i][j]);
            
             
	
	 
    //在这我调试了很久，因为忘了a【i】是 char *型变量 输入时不需要取地址 
    int n=0;
	//printf("how many commands are there\n");
	scanf("%d",&n);
	for(l=0;l<n;l++)     //外部循环变量不可以和内部相同          
{
	char s[100]="0";
	scanf("%s\n",s);
	
	if(strcmp(s,"SR")==0)
	{
    
	int m=0,q=0;
	
	char b[100]="0";
	
	scanf("%d %d",&m,&q);
	strcpy(b,a[m-1]);   //strcpy交换的是两个char*型变量 也就是交换该指针指向的元素 
	strcpy(a[m-1],a[q-1]);
	strcpy(a[q-1],b);
	 
	continue; 
	 
	} //交换特定某一行 
	
	if(strcmp(s,"SC")==0)
	{
		int m=0,q=0;int k;
		scanf("%d %d",&m,&q);
		int i=0;
	for(i=0;i<r;i++)
	{
		k=a[i][m-1];   //可以这样是因为我二维数组里全是int型变量    
		a[i][m-1]=a[i][q-1];
		a[i][q-1]=k;
	}
	continue;
   }//交换某一列
   
   
   if(strcmp(s,"DR")==0)
    {   
	    int f=0;
    	//printf("你要删哪一行\n");
    	int m=0;
    	scanf("%d",&m);
        for (f=m-1;f<r-1;f++)
    	{  
		     
    		strcpy(a[f],a[f+1]);
		            
		}
		  sum=sum+1;     
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
	  for(x=m-1;x<c;x++)
	  {
	  	a[y][x]=a[y][x+1]; 
	  } 
     } 
	 qwe=qwe+1; 
	 continue;
	
	}// 删除某一列 
	
	if(strcmp(s,"IR")==0)          
	{   
	    int x=0;
	     
		//printf("你要在哪一行上方插入一行\n");
		scanf("%d",&x);
		
		for(i=r;i>x-1;i--)
		{
		   strcpy(a[i],a[i-1]);	 
		}
		
	    for(i=0;i<c;i++)
	    {
	    	a[x-1][i]=0;
		}
		
		r=r+1;
	    continue;
	} //加上一行0 
	
	if(strcmp(s,"IC")==0)   
	{
		int i=0;
		scanf("%d",&i);
		int y=0;int x=0;
	  for(y=r-1;y>=0;y--)
	  {   
	  for(x=c;x>i-1;x--)
	  {
	  	a[y][x]=a[y][x-1]; 
	  } 
     } 
      for(y=0;y<r;y++)
      {
      	a[y][i-1]=0;
	  }
	  
	}
	hum=hum+1;
}  //加上一列0 
	 
	for(i = 0; i < r-sum; i ++)  
	{
	for(j=0;j<c-qwe+hum;j++)
	printf("%d ", a[i][j]); 
	printf("\n");
	//printf("ok\n");
	  
    }
     
     

    
    
 }
