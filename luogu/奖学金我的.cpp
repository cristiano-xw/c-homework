#include<stdio.h>
#include<iostream>
using namespace std;
struct student 
{
	int yuwen;
	int shuxue;
	int yinyu;
	int xuhao;
	int zongfen;
};

int main(void)
{
	struct student student[333];
	int n=0;
	cin>>n;
	int i=0;
	for(i=1;i<=n;i++)
	{
		scanf("%d%d%d",&student[i].yuwen,&student[i].shuxue,&student[i].yinyu);
		student[i].zongfen=student[i].yuwen+student[i].shuxue+student[i].yinyu;
		student[i].xuhao=i;
	}
	
	int j=0;
	for(i=1;i<=n-1;i++)
	{
		for(j=i+1;j<=n;j++)
		{
			if(student[i].zongfen<student[j].zongfen)
			{
				swap(student[i].xuhao,student[j].xuhao);
				swap(student[i].yuwen,student[j].yuwen);
				swap(student[i].shuxue,student[j].shuxue);
				swap(student[i].yinyu,student[j].yinyu);
				swap(student[i].zongfen,student[j].zongfen);
			}
			
			if(student[i].zongfen==student[j].zongfen&&student[i].yuwen<student[j].yuwen)
			{
				swap(student[i].xuhao,student[j].xuhao);
				swap(student[i].yuwen,student[j].yuwen);
				swap(student[i].shuxue,student[j].shuxue);
				swap(student[i].yinyu,student[j].yinyu);
				swap(student[i].zongfen,student[j].zongfen);
			}
			
			if(student[i].zongfen==student[j].zongfen&&student[i].yuwen==student[j].yuwen&&student[i].xuhao>student[j].xuhao)
			{
				swap(student[i].xuhao,student[j].xuhao);
				swap(student[i].yuwen,student[j].yuwen);
				swap(student[i].shuxue,student[j].shuxue);
				swap(student[i].yinyu,student[j].yinyu);
				swap(student[i].zongfen,student[j].zongfen);
			}
		}
	}
	
	for(i=1;i<=5;i++)
	{
		cout<<student[i].xuhao<<" "<<student[i].zongfen<<endl;
	}
	return 0;
}
