//��һ���ַ���ѭ��������M��M>=0�����ַ�λ�ã������ַ���A�е������ɣ�A0 A1����AN-1���任Ϊ��AN-M ���� AN-1 A0 A1����AN-M-1����N���ַ����ĳ��ȣ�
//���M����ѭ��������ǰ���M��λ�ã���
//˼·����һ���ַ��������ݸ��Ƹ���һ���ַ�����Ȼ�������µ��ַ����ı����ı�ԭ���ַ������� 
//���� fgets() �� gets() һ�������Ļس�����ӻ�������ȡ������
//ֻ���� gets() ��ȡ������������ fgets() ��ȡ�����Լ����š�����֮����������û�лس��ˣ� 
#include<stdio.h>
#include<string.h>
#include <stdlib.h>
int main(void)
{   
	char a[200]="0"; //�ַ���һ��Ҫ��ʼ�� 
	char b[200]="0";
	char c[200]="0"; 
	int n; 
	
	//printf("��Ҫ�ƶ���λ\n");
    scanf("%d",&n);
    getchar();
    //fflush(stdout);//���ջس� 
    fgets(a,201,stdin);
	//fflush(stdout);
	int len=0;
	len=strlen(a);  //�����˻��� ��strlen�������˿ո���Ϊ�ո�������� strlen��������ո�ȡ�����Ƿ�ո��Ǳ��洢�� 
	printf("%d\n",len);
	strncpy(b,a+len-n-1,n);
   // printf("%s\n",b);
	strncpy(c,a,len-n-1);
	//printf("%s\n",c);
	strcat(b,c);
	printf("%s",b);//���˸��س� 
	 
	
} 
