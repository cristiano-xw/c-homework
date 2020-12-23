#include <stdio.h>
#include <string.h>
#include <stdlib.h>
 
void mux(const char *numA, const char *numB, char *result);
char *reverse(const char *src, char *dst);
void mux_ch_str(const char ch, const char *str, char *result);
void add_str(char *dst, const char *src);
 
int main(void)
{
	char numA[100] = "";//���ַ������� 
	char numB[100] = "";
	char *result = NULL;
 
	printf("input numA = ");
	fflush(stdout);  //��ձ�׼��������� 
	scanf("%s", numA);
 
	printf("input numB = ");
	fflush(stdout);
	scanf("%s", numB);
 
	result = (char *)malloc(strlen(numA) + strlen(numB) + 1);
	mux(numA, numB, result);
	printf("%s x %s = %s \n", numA, numB, result);
 
	free(result);//�ͷ��ڴ� 
	result = NULL;
	return 0;
}
 
/*�ַ������, result = numA x numB, numA, numB˳������*/
void mux(const char *numA, const char *numB, char *result)
{
	char *A = NULL;  //numA����
	char *B = NULL;  //numB����
	char *t = NULL;  //�洢�ַ����ַ�����˽��
	char *r = NULL;  //�洢�ַ������ַ�����˽��
	int  i  = 0;
 
	A = (char *)malloc(strlen(numA)+1);
	B = (char *)malloc(strlen(numB)+1);
	t = (char *)malloc(strlen(numA) + strlen(numB) + 1);
	r = (char *)malloc(strlen(numA) + strlen(numB) + 1);
 
	memset(A, 0, strlen(numA) + 1); //��s��ָ���ĳһ���ڴ��е�ÿ���ֽڵ�����ȫ������Ϊchָ����ASCIIֵ, 
	memset(B, 0, strlen(numB) + 1);
	memset(t, 0, strlen(numA) + strlen(numB) + 1);
	memset(r, 0, strlen(numA) + strlen(numB) + 1);
 
	reverse(numA, A); //numA��ת����ΪA
	reverse(numB, B); //numB��ת����ΪB
 
	i = 0;
	while (A[i])
	{
		memset(t, 0, strlen(numA) + strlen(numB) + 1);
		mux_ch_str(A[i], B, t);  //��A��ȡ��һ���ַ���B�����,���������t��
		add_str(r+i, t);   //��t���ۼ���result��
		i++;
	}
 
	reverse(r, result);
 
	free(A);
	free(B);
	free(t);
	free(r);
}
 
/*�ַ����������� src -> dst*/
char *reverse(const char *src, char *dst)
{
	int count = 0;
	int i = 0;
 
	while(src[count])
	count++;
	for (i=0; i<count; i++)
	{
		dst[i] = src[count - 1 - i];
	}
	dst[count] = '\0';
	return dst;
}
 
/*�ַ����ִ�,result = ch x str, str, resultΪ��������*/
void mux_ch_str(const char ch, const char *str, char *result)
{
	char r = 0; //��˽��
	char c = 0; //��λ����
	int i = 0;
 
	while (str[i])
	{
		r = c + (ch - '0')*(str[i] - '0');
		result[i] = r % 10 + '0';
		c = r / 10;
		i++;
	}
	if (c > 0)
	{
		result[i] = c + '0';
		i++;
	}
	result[i] = '\0';
}
 
/*�ַ������,dst = dst + src, dst, srcΪ��������*/
void add_str(char *dst, const char *src)
{
	char r = 0; //��ӽ��
	char c = 0; //��λ����
	int i = 0;
 
	while(dst[i] || src[i])
	{
		r = c; 
		if(dst[i])
			r += dst[i] - '0';
		if(src[i])
			r += src[i] - '0';
		dst[i] = r % 10 + '0';
		c = r / 10;
		i++;
	}
	if (c > 0)
	{
		dst[i] = c + '0';
		i++;
	}
	dst[i] = '\0';
}
 
