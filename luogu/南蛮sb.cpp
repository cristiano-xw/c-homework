#include<bits/stdc++.h>
using namespace std;
char pic[2048][2048];//��ͼ 

void huatu(int x,int y,int jie)
{
	if(jie==1)//�ӵײ㽨�� 
	{
		pic[x][y]='/';
		pic[x][y+1]='_';
		pic[x][y+2]='_';
		pic[x][y+3]='\\';
		pic[x-1][y+1]='/';
		pic[x-1][y+2]='\\';//'\\'����һ�Ǹ�ת�����
	}
	else//���ϵݹ飬�ֳɸ�С��
	{
		int m=pow(2,jie);//����ÿ�������εĸ߶���״μ���
		huatu(x,y,jie-1);//���� 
		huatu(x,y+m,jie-1);//��ͼ��ÿ�ζ��൱���ڵ��»�����һ���ģ�������Ϊ�Ǵ������ϣ���Ȼ���ô桪����������ĵ�2��
		huatu(x-m/2,y+m/2,jie-1);//��һ�����ŵ�������֮�䡪����������ĵ�3�������Ż�һ�����൱��ȥ���м��
	}
}

int main()
{
	int n;
	cin>>n;
	memset(pic,' ',sizeof(pic));//ȫͼ�ո� 
	int m=pow(2,n);//ͼ�Ĳ���Ϊ2��n�η� 
	huatu(m,1,n);//��ʼ��ͼ ��������
	
	int a,b;
	for(a=1;a<=m;a++)
	{
		for(b=1;b<=m*2;b++)
			printf("%c",pic[a][b]);
		printf("\n");
	}	//���
	
	printf("\n");
	return 0;
}
