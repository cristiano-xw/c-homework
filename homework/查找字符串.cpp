//�ж��ַ����Ƿ�����Ҫ������ַ�����������Ҫ��֮һ���ַ������YES���������NO��
//1. �ַ������ڡ�SCU����
//2. ���硰xSCUx�����ַ���,����x�ǽ�����ĸA��ɵ��ַ�����
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
        if(s[i]==c[j]){//����ַ���ͬ�������ַ�������
            i++;
            j++;
        }else{
            i=i-j+1; //�����ַ��ص��Ƚ��ʼ�Ƚϵĺ�һ���ַ�
            j=0;     //�ִ��ַ����¿�ʼ
        }
        if(j==strlen(c)){ //���ƥ��ɹ�
            flag=0;  //�ִ�����
            break;
        }
    }
    return flag;
}


