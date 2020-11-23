#include<stdio.h>
#include<string.h>
#include<conio.h>
int main(void)
{   
    printf("please input License plate\n"); 
	 int ch ;
     ch=getchar() ;
    
	int t,h;
    	t=0;
    	h=0;
		char b[500]="京冀豫云辽黑湘皖鲁新苏浙赣鄂晋蒙陕吉闽贵粤青藏川宁琼渝津沪桂甘警挂学港澳";
    	char a[500];
    	char *p[500]={"E4BAAC","E58680","E8B1AB","E4BA91","E8BEBD","E9BB91","E6B998","E79A96","E9B281","E696B0","E88B8F","E6B599",
    		"E8B5A3","E98482","E6998B","E89299","E99995","E59089","E997BD","E8B4B5","E7B2A4","E99D92","E8978F","E5B79D","E5AE81","E790BC",
    		"E6B89D","E6B4A5","E6B2AA","E6A182","E79498","E8ADA6","E68C82","E5ADA6","E4BDBF","E6B8AF","E6BEB3"};
	
    if ((ch>=65) && (ch<=122))
      { 
        printf("please input License plate again to make sure it is right \n");
	   int len; 
	   char str1[20]={0}; //车牌存入 
	    rewind(stdin); //清空缓存区 
	   scanf("%s",str1);
        char str2[2]={0}; //将头两位字符存入 
       strncpy(str2,str1,2);
        char str3[2]={0};
       strncpy(str3,str1+2,2);
        char str4[5]={0};
       strncpy(str4,str1+4,5);
       
        for(int i=0;i<200;i=i+2,t=t+1)
        {
        if((str3[0]==b[i])&&(str3[1]==b[i+1]))  //检查和数组是否对应，对应即跳出。 
        break;
        }
        printf("%s",str2);
        printf("%s",p[t]);
        printf("%s",str4); //多了个@输出 问题出在str2上 
        
        
	  }
      	
	  else 
    {  
	  printf("please input License plate again to make sure it is right \n");
      int len; 
	  char str1[20]; //车牌存入 
	  rewind(stdin); //清空缓存区 
	  scanf("%s",str1);
	  len=strlen(str1);
	  //printf("%d",len);
      if (len == 8)
	  { 
       char str2[2]; //将头两位汉字存入 
       strncpy(str2,str1,2);
       char str3[6];
       strncpy(str3,str1+2,6); //将第二位开始到最后一位字符存入 
       
        for(int i=0;i<200;i=i+2,t=t+1)
        {
        if((str2[0]==b[i])&&(str2[1]==b[i+1]))  //检查和数组是否对应，对应即跳出。 
        break;
        }
       printf("%s",p[t]);
       printf("%s",str3);
       }
       if(len==9)
    {  
       
      char str2[2]; //将头两位汉字存入 
      strncpy(str2,str1,2);	
      char str3[5];
      strncpy(str3,str1+2,5);
      char str4[2];
      strncpy(str4,str1+7,2);
      
      for(int i=0;i<200;i=i+2,t=t+1)
        {
        if((str2[0]==b[i])&&(str2[1]==b[i+1]))  //检查和数组是否对应，对应即跳出。 
        break;
        }
        
      for(int i=0;i<200;i=i+2,h=h+1)
        {
        if((str4[0]==b[i])&&(str4[1]==b[i+1]))  //检查和数组是否对应，对应即跳出。 
        break;
        }
        printf("%s",p[t]);
        printf("%s",str3);
        printf("%s",p[h]);
        
	}
      return 0;
  }}
