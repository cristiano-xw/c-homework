#include<bits/stdc++.h>//����ͷ������
using namespace std;
string yunqian(){
    int k;//ѹ���Ĵ���
    char str;//������ַ�
    
    string s="",d="";//s�����մ𰸣�d�Ǳ�ѹ�����ִ��������˳�ʼ��
    /*ע�⣺str,s,dӦ�ö����ں����ڲ���������ÿ�εݹ��г�ʼ��������ᵼ��һ��RE�����ܻ��м���MLE����֮û��AC���Ҿ���Ϊ������˺ü���*/
	while(cin>>str){//���������ַ�
		if(str=='['){//����ҵ��˱�ѹ�����ִ�
			cin>>k;//����ѹ������
			d=yunqian();//�ݹ����
			cout<<"ok "<<d<<endl;
			cout<<"  "<<s<<endl;
			
			while(k>0)
			{ 
				s+=d;//�ѽ�ѹ����ִ�����k�κ���ӵ�ԭ�����ַ�����
				k--;
			}
		}
	    if(str==']')
		{   cout<<"this "<<s<<endl;                    //����ҵ���ѹ�����ִ���ĩβ
			return s;//������һ��ݹ鲢�����Ѿ�����ѹ���ִ�
		}
		if(str!='[')
		{//���û�б�ѹ��
			s+=str;//ֱ���������������ַ���
			printf("1\n");
		}
	}
}
int main(){
	cout<<yunqian();
	return 0;//���������
}
