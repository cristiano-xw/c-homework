//�ṹ������������ϲ�ͬ�������ͣ������µı������͡���һ������ͬʱ�ж��ֵʱ�ܺ��á� 
#include<stdio.h>
struct student
{
	int age ;
	float score;
	char sex;
 } st,st2;
int main(void)
{   
	struct student st = { 17,88.8,'F'};//�����ͬʱ��ֵ����һͬ��ֵ ���ڴ������ﰴ˳��ֵ�� 
	printf("%d\n%.5f\n%c\n",st.age,st.score,st.sex);
	
	struct student st2;
	st2.age=10;
	st2.score=88.22;
	st2.sex='M';
	printf("%d\n%.5f\n%c\n",st2.age,st2.score,st2.sex);
}

