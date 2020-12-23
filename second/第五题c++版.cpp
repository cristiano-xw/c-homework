#include <cstring>
#include <iostream>

using namespace std;

void subset(char list[], char tag[], int n,int len)   //生成子集 共2^n个
{


    if (n == len)   //首先输出全集的那种情况 
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
    //cout << "请您输入整数的个数:";
    int m;
    cin>>m;  //这里的m是循环要进行m次 
    while(m--)
    {
        int n;
        cin >> n;   //这里的n是每行一共有n个数 
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
