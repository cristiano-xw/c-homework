#include<bits/stdc++.h>
using namespace std;
char pic[2048][2048];//建图 

void huatu(int x,int y,int jie)
{
	if(jie==1)//从底层建起 
	{
		pic[x][y]='/';
		pic[x][y+1]='_';
		pic[x][y+2]='_';
		pic[x][y+3]='\\';
		pic[x-1][y+1]='/';
		pic[x-1][y+2]='\\';//'\\'里有一是个转义符号
	}
	else//不断递归，分成更小的
	{
		int m=pow(2,jie);//这里每个三角形的高度随阶次减少
		huatu(x,y,jie-1);//降阶 
		huatu(x,y+m,jie-1);//分图，每次都相当于在底下画两个一样的，这里因为是从下往上，不然不好存————构造的第2步
		huatu(x-m/2,y+m/2,jie-1);//画一个倒着的在三个之间————构造的第3步，反着画一个，相当于去掉中间的
	}
}

int main()
{
	int n;
	cin>>n;
	memset(pic,' ',sizeof(pic));//全图空格 
	int m=pow(2,n);//图的层数为2的n次方 
	huatu(m,1,n);//开始画图 从下往上
	
	int a,b;
	for(a=1;a<=m;a++)
	{
		for(b=1;b<=m*2;b++)
			printf("%c",pic[a][b]);
		printf("\n");
	}	//输出
	
	printf("\n");
	return 0;
}
