#include <iostream> //cin & cout ��iostream
#include <cstring> //memset & strlen ��cstring
#include <cstdio> //sscanf & sprintf ��cstdio
using namespace std;
int main(){
	char a;//a���ڴ洢�����
	int n,c,d;//n�洢���������ͣ�cd�洢��������
	char s[100],b[10];//s�洢���յ��ַ�����b��ʱ����
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>b;//����һ���ַ����п������������Ҳ�п���������
		if(b[0]>='a' && b[0]<='z'){
			a=b[0];//�����������ʹ���a��Ȼ����������
			cin>>c>>d;
		}else{
			sscanf(b,"%d",&c);//��������־�ת��bΪint�洢����һ������
			cin>>d;//Ȼ������ʣ�µĵڶ�������
		}
		memset(s,0,sizeof(s));//���ԭ�е��ַ�������ֹ�����жϴ���
		if(a=='a')//��sprintf��ʽ��
			sprintf(s,"%d+%d=%d",c,d,c+d);
		else if(a=='b')
			sprintf(s,"%d-%d=%d",c,d,c-d);
		else if(a=='c')
			sprintf(s,"%d*%d=%d",c,d,c*d);
		cout<<s<<endl<<strlen(s)<<endl;//����ַ������ַ�������
	}
	return 0;
}


