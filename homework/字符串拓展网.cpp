#include<bits/stdc++.h>
using namespace std;
int p1,p2,p3,i=0,k;
char ch[300],be,af,f,j,p;//p�������; 
int main()  
   {
	scanf("%d%d%d%s",&p1,&p2,&p3,ch);//����;
	while(ch[i])
	{ 
		be=ch[i-1];af=ch[i+1];f=ch[i];//f�洢ch[i],�����ж�; 
		if(f=='-'&&af>be&&(be>='0'&&af<='9'||be>='a'&&af<='z'))
		{ 
			for(p3==1?j=be+1:j=af-1; p3==1?j<af:j>be; p3==1?j++:j--)
			{
				p=j;//j�����α�����p���ַ��ͱ����������ǽ�p��ֵΪASCII��Ϊj���ַ�; 
				if(p1==2)//�Ƿ��д; 
					p=(p>='a')?  p-32:p;//�������ĸ��ת�ɴ�д 
				else if(p1==3) p='*';//�Ƿ����'*' 
				for(k=0; k<p2; k++)//���p2�� 
					printf("%c",p);
			}
		} 
		else
		printf("%c",f);//���ch[i]�Ƿ�'-'������ǰ��������������ԭ�����;
		i++;   //һ��Ҫ���ں��棬��Ȼ�����QAQ;
	}
	return 0;
}
