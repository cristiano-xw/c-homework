//读入n名学生的姓名、身份证号、成绩。查找并输出匹配查找串的学生的姓名和学号和成绩。
//学生名单中可能缺考，没有成绩，表示为n/a。 
//其中姓名为不超过10个字符的字符串，身份证是标准18位，成绩为0到100之间的一个整数。
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
struct student
{
	char name[10];
	char ID[20];
	char score[100];
	char rank[100]; 
	
};

int main(void)
{   
    int n,i;
	int j; 
    char a[100];
    char b[100];
    char c[100];
    
    scanf("%d",&n);               
	struct student student[n]; //定义一个名叫student的结构体，存放所有学生的信息 
	for(i=0;i<n;i++)
	{   
		scanf("%s%s%s",&student[i].name,&student[i].ID,&student[i].score);
	}
	
	for(i=1;i<n;i++)          //如果第一个数最大，把第一个数调到第n个数需要n-1次                                   //排序开始（冒泡）
    {
    	
        for(j=n-1;j>=0;j--)//比较的时候可以根据长度比较 
        {
            if(strcmp(student[j].score,student[j-1].score)>0&&strlen(student[j].score) == strlen(student[j-1].score) || strlen(student[j].score)> strlen(student[j-1].score) )  //相邻两项交换 
            {
            	
              strcpy(a,student[j-1].score);                                  //交换成绩
              strcpy(student[j-1].score,student[j].score);    
              strcpy(student[j].score,a);
              
               strcpy(b,student[j-1].name);                                  //交换成绩
               strcpy(student[j-1].name,student[j].name);    
               strcpy(student[j].name,b);
               
            strcpy(c,student[j-1].ID);                                  //交换成绩
            strcpy(student[j-1].ID,student[j].ID);    
            strcpy(student[j].ID,c);
            
            }
            
        }
      }//排名是数组名加一 
    
                  
    
    
    
    char d[100];int t;int k; int p;int q;
    scanf("%s",d);//将查找信息存入
                 
    
    
    
                           
    
    
    

    for (t=0;t<n;t++)
    {
    	if (strcmp(d,student[t].score)==0)
		{
			break;
		}
	}        //从前往后找，找到第一个和输入分数相同的人 初始排名为t+1 
	
	
	 
	
	
    
    
    int m=t+1; 
    int r=t;
	 q=1;                //满足条件的人在数组中初始排名为 m 
    for(k=t;k>=0;k--)    //找出排名相同的 
    {
    	if (strcmp(student[k].score,student[k-1].score)==0)
    	{
    		m=m-1;  r=r-1; q=q+1;//q表示有几个成绩相同的人 让他们共同的排名为m 观察出有相同成绩的学生第一个数组名为r
		}
		if (strcmp(student[k].score,student[k-1].score)!=0)
		{
			break;
		}
	}
	int e=t;
	for(k=t;k<n;k++)    //找出排名相同的 
    {
    	if (strcmp(student[k].score,student[k+1].score)==0)
    	{
    		e=e+1;   q=q+1;   //q表示有几个成绩相同的人 让他们共同的排名为m   观察出有相同成绩的学生最后的数组名为e 
		}
		if (strcmp(student[k].score,student[k+1].score)!=0)
		{
			break;
		}
	}
	
    for (t=0;t<n;t++)
    {    
    
        
    	if (strcmp(d,student[t].score)==0 )
		{
		   for(i=r;i<=e;i++)
		   {
		   printf("%s %s %s %d\n",student[i].name,student[i].ID,student[i].score,m);
		   }
		   break;
		}
	}       //当按照成绩查找的时候，有相同成绩的一同输出。 只有成绩相同才会出现排名相同 
	
	
	
    
           return 0;
	
	
	
}
