#include<stdio.h>
#include <string.h>
int is_in(char *s, char *c);
int main()
{
	char str[100];
	char str1[100];
	int length;
	printf("please input first str str:\n");
	scanf("%s",&str);
	printf("please input second str str1:\n");
	scanf("%s",&str1);
	if(is_in(str,str1)==1){
		printf("str include str1\n");
	}else{
		printf("str not include str1\n");
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
            flag=1;  //字串出现
            break;
        }
    }
    return flag;
}
