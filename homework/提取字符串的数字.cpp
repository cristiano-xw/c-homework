/*
 时间: 2020/08/20 
 目的：提取字符串中的数字
 功能：增加对字符串操作的了解，如何判断字符串里的数字
       和如何将连在一起的数字作为一个整数存储
*/
#include<stdio.h>
void search(char*);

int main()
{
    char str[10000];
    printf("输入字符串："); 
    gets(str);
 search(str); 
 return 0; 
}

void search(char *str){
   int i,j=0,flag=0,t=0,a[20];
   for(i=0;str[i]!='\0';i++){
      if(str[i]>='0'&&str[i]<='9'&&flag==0){//判断是不是第一个数字 
          flag=1;
          t=(int)str[i]-'0';//字符型强制转换为整型而且-'0'不能少 
   }
      else if(str[i]>='0'&&str[i]<='9'&&flag!=0)//判断是不是前一个数字后的连续数字 
          t=t*10+(int)str[i]-'0';
    else if(flag!=0){
     a[j]=t;
     j++;
     flag=0;
    }
   }
   if(str[i-1]>='0'&&str[i-1]<='9'){//如果最后一个字符是数字也可以将它输出 
               a[j]=t;
            j++;
          }
   printf("共有%d个数，分别是：\n",j);
   for(i=0;i<j;i++)
   printf("%d\t",a[i]);
}
/*
总结：当一个字符为数字且flag等于0则它为第一个数字
      当一个字符为数字且flag不等于0那么它就是前面一个数字的连续数字 
-----------------------
在dev中输出结果为 
输入字符串：A123x456 17960？302tab5876
共有5个数，分别是：
123     456     17960   302     5876          正确 
----------------------- 
*/
