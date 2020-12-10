//判断字符串是否满足要求。如果字符串满足以下要求之一的字符串输出YES，否则输出NO：
//1. 字符串等于“SCU”；
//2. 形如“xSCUx”的字符串,其中x是仅由字母A组成的字符串；
#include<stdio.h>
#include<string.h> 
int is_in(char *s, char *c);
int main(void)
{   printf("please input some characters\n");
    int i=0,n=5;
    while (i<=n)
	{
    char str[100] = "scu";
	char str1[100];
	int length;
    scanf("%s",str1);
    getchar();
	if(is_in(str1,str)==0)
	{
		printf("true\n");
	}
	else{
		printf("not true\n");
	}
 i++;
  }
}
int is_in(char *s, char *c)
{
    int i=0,j=0,flag=-1;
    while(i<strlen(s) && j<strlen(c)){
        if(s[i]==c[j]){//如果字符相同则两个字符都增加
            i++;
            j++;
        }else{
            i=i-j+1; //主串字符回到比较最开始比较的后一个字符
            j=0;     //字串字符重新开始
        }
        if(j==strlen(c)){ //如果匹配成功
            flag=0;  //字串出现
            break;
        }
    }
    return flag;
}


