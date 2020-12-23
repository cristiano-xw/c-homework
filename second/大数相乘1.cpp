#include <stdio.h>
#include <string.h>
#include <stdlib.h>
 
void mux(const char *numA, const char *numB, char *result);
char *reverse(const char *src, char *dst);
void mux_ch_str(const char ch, const char *str, char *result);
void add_str(char *dst, const char *src);
 
int main(void)
{
	char numA[100] = "";//用字符串储存 
	char numB[100] = "";
	char *result = NULL;
 
	printf("input numA = ");
	fflush(stdout);  //清空标准输出缓冲区 
	scanf("%s", numA);
 
	printf("input numB = ");
	fflush(stdout);
	scanf("%s", numB);
 
	result = (char *)malloc(strlen(numA) + strlen(numB) + 1);
	mux(numA, numB, result);
	printf("%s x %s = %s \n", numA, numB, result);
 
	free(result);//释放内存 
	result = NULL;
	return 0;
}
 
/*字符串相乘, result = numA x numB, numA, numB顺序排列*/
void mux(const char *numA, const char *numB, char *result)
{
	char *A = NULL;  //numA逆序串
	char *B = NULL;  //numB逆序串
	char *t = NULL;  //存储字符与字符串相乘结果
	char *r = NULL;  //存储字符串与字符串相乘结果
	int  i  = 0;
 
	A = (char *)malloc(strlen(numA)+1);
	B = (char *)malloc(strlen(numB)+1);
	t = (char *)malloc(strlen(numA) + strlen(numB) + 1);
	r = (char *)malloc(strlen(numA) + strlen(numB) + 1);
 
	memset(A, 0, strlen(numA) + 1); //将s所指向的某一块内存中的每个字节的内容全部设置为ch指定的ASCII值, 
	memset(B, 0, strlen(numB) + 1);
	memset(t, 0, strlen(numA) + strlen(numB) + 1);
	memset(r, 0, strlen(numA) + strlen(numB) + 1);
 
	reverse(numA, A); //numA翻转保存为A
	reverse(numB, B); //numB翻转保存为B
 
	i = 0;
	while (A[i])
	{
		memset(t, 0, strlen(numA) + strlen(numB) + 1);
		mux_ch_str(A[i], B, t);  //从A串取下一个字符与B串相乘,结果保存在t串
		add_str(r+i, t);   //将t串累加至result串
		i++;
	}
 
	reverse(r, result);
 
	free(A);
	free(B);
	free(t);
	free(r);
}
 
/*字符串逆序排列 src -> dst*/
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
 
/*字符乘字串,result = ch x str, str, result为逆序排列*/
void mux_ch_str(const char ch, const char *str, char *result)
{
	char r = 0; //相乘结果
	char c = 0; //进位数字
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
 
/*字符串相加,dst = dst + src, dst, src为逆序排列*/
void add_str(char *dst, const char *src)
{
	char r = 0; //相加结果
	char c = 0; //进位数字
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
 
