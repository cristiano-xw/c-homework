#include <iostream.h>
template<class T>
void out(T Element[],bool flag[],int nums){
/*******************************************************
Element����������Ԫ�ص����飬flag�Ǻ�Element�ȳ������飬
������������Element��ÿ��Ԫ�ص���ʾ��־�ģ���flag[i]=true
,��Element[i]��ʾ��������ʾ��numsΪElement�ĳ��ȡ��ú���
���ݱ�־����flag����Element����Ӧ���ݽ��������
********************************************************/
	bool isnull=true;
	for(int i=0;i<nums;i++)
		if(flag[i]){
			cout<<Element[i];
			isnull=false;
		}
	if(isnull)
		cout<<"�ռ�";
	cout<<endl;
}

template<class T>
void SubSet(T Element[],bool flag[],int m,int n,int num){
/*******************************************************
Element����������Ԫ�ص����飬flag�Ǻ�Element�ȳ������飬
������������Element��ÿ��Ԫ�ص���ʾ��־�ģ�m�Ƕ�Ҫ������
���������ʼλ�ã�n�Ƕ�Ҫ�����Ӽ�����Ľ�ֹλ�ã�num��Ҫ
�����Ӽ�����ĳ��ȡ�Ҫ��ȡ��n��Ԫ�ص��Ӽ����������е�ÿһ
��Ԫ����˵�����Ӽ��ɷ�Ϊ�����򲻰�����Ԫ��������������ǿ�
�����õݹ鷽������ĳ���Ӽ�����ĳ��Ԫ��e1��Ȼ��������Ԫ�ص�
������Ӽ���Ȼ�������Ӽ���������Ԫ��e1��Ȼ������Ԫ�صݹ��
���Ӽ��������������������������е��Ӽ���
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
	cout<<"�������뼸��Ԫ�أ�\n";
	cin>>nums;
	char *e=new char[nums];
	bool *flag=new bool[nums];
	for(int i=0;i<nums;i++){
		cout<<"������Ԫ�أ�";
		cin>>e[i];
	}
	cout<<"����Ԫ�ص������Ӽ�Ϊ��\n";
	SubSet(e,flag,0,nums-1,nums);
}