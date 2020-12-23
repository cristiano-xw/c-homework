#include <iostream.h>
template<class T>
void out(T Element[],bool flag[],int nums){
/*******************************************************
Element是用来保存元素的数组，flag是和Element等长的数组，
它是用来保存Element中每个元素的显示标志的，若flag[i]=true
,则Element[i]显示，否则不显示。nums为Element的长度。该函数
根据标志数组flag来对Element的相应内容进行输出。
********************************************************/
	bool isnull=true;
	for(int i=0;i<nums;i++)
		if(flag[i]){
			cout<<Element[i];
			isnull=false;
		}
	if(isnull)
		cout<<"空集";
	cout<<endl;
}

template<class T>
void SubSet(T Element[],bool flag[],int m,int n,int num){
/*******************************************************
Element是用来保存元素的数组，flag是和Element等长的数组，
它是用来保存Element中每个元素的显示标志的，m是对要计算子
集数组的起始位置，n是对要计算子集数组的截止位置，num是要
计算子集数组的长度。要想取得n个元素的子集，对于其中的每一
个元素来说，该子集可分为包含或不包含该元素两种情况。我们可
以利用递归方法，让某个子集包含某个元素e1，然后其他的元素递
归计算子集，然后再让子集不包含该元素e1，然后其他元素递归计
算子集，最后将两种情况合起来就是所有的子集。
********************************************************/
	if(m<=n){
		flag[m]=false;
		if(m!=n)
			SubSet(Element,flag,m+1,n,num);
		else
			out(Element,flag,num);
		flag[m]=true;
		if(m!=n)
			SubSet(Element,flag,m+1,n,num);
		else
			out(Element,flag,num);
	}
}
int main(){
	int nums;
	cout<<"您想输入几个元素？\n";
	cin>>nums;
	char *e=new char[nums];
	bool *flag=new bool[nums];
	for(int i=0;i<nums;i++){
		cout<<"请输入元素：";
		cin>>e[i];
	}
	cout<<"该组元素的所有子集为：\n";
	SubSet(e,flag,0,nums-1,nums);
}