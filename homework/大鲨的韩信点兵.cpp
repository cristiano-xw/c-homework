//1009�����ŵ��

#include <iostream>

int main() {

    int n, n1, n2,n3;
    char  'Hanxin hx';
    std::cin >> n;

    for(int i = 0; i < n; ++i) {

        std::cin >> n1 >> n2 >> n3;

        HanXin hx;  //����

        hx.line3(n1);  //3��һ��

        hx.line5(n2);   //5��һ��

        hx.line7(n3);   //7��һ��

        hx.showMany();

    }

}
