#include<stdio.h> 
#include<malloc.h> 
#include<string.h> 
int main()
{
    int **a; //定义二维指针。
    int m, n;//行数和列数。
    int i,j;
     
    scanf("%d%d", &m, &n); //输入行数和列数。
     
    a = (int **) malloc(sizeof(int *) *m);//申请一组一维指针空间。
    for(i = 0; i < m; i ++)
    a[i] = (int *)malloc(sizeof(int) * n); //对于每个一维指针，申请一行数据的空间。
     
    for(i = 0; i < m; i ++)
        for(j = 0; j < n; j ++)
            scanf("%d",&a[i][j]);//输入第i行第j列的数据。其中&p[i][j]也可以写作p[i]+j或者是 *(p+i) + j. 功能相同。
     
    /*printf("输入的数组为%d行%d列：\n", m, n);
    for(i = 0; i < m; i ++)
    {
        for(j = 0; j < n; j ++)//这个循环可以输出一行元素。
            printf("%d ", p[i][j]);//输出i行j列的元素。
        printf("\n");//每行输入结束加换行符。
    } */
	
	for(i=0;i<n;i++)
	{ 
	char s[100]="0";
	scanf("%s\n",s);
	
	
	if(strcmp(s,"SR")==0)
	{
	int u=0,q=0;
	char b[100];
	scanf("%d%d",&u,&q);
	strcpy(b,a[u]);
	strcpy(a[u],a[q]);
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
     
     
    return 0;
}

