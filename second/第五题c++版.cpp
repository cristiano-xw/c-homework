#include <cstring>
#include <iostream>

using namespace std;

void subset(char list[], char tag[], int n,int len)   //�����Ӽ� ��2^n��
{


    if (n == len)   //�������ȫ����������� 
    {
        cout << "-->";
        for (int i = 0; i < len; i++)
        {
            if (tag[i] == 1)   
                cout <<' '<< list[i];                                               
        }

        cout<<endl;
        return;
    }
    
    tag[n] = 1;     
    subset(list, tag, n + 1,len);

    tag[n] = 0;    
    subset(list, tag, n + 1,len);
}

int main()
{
    //cout << "�������������ĸ���:";
    int m;
    cin>>m;  //�����m��ѭ��Ҫ����m�� 
    while(m--)
    {
        int n;
        cin >> n;   //�����n��ÿ��һ����n���� 
       char*number = new char[n];
        char *tag = new char[n];
        for (int i = 0; i < n; i++)
        {
            cin >> number[i];   
        }
        subset(number, tag, 0,n);                  
    }


    return 0;
}
