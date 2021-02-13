#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
                                                       
int main() 
{        
    double a, b, c;
    cin >> a >> b >> c;
    //l和r分别表示利率的最小值和最大值，也就是初始范围。
    double l = 0, r = 1000, mid = 0;
    //double数据类型，相差小于0.0001结束循环，避免多次循环
    while (l < r - 0.0001) 
	{                  
        mid = (l + r) / 2;//mid为范围的中间值。
        double w = a;//w为未还的总钱数。
        for (int i = 0; i < c; ++i)//模拟还钱过程。
            w = w - b + w * (mid / 100);
        if (w > 0.0001)//检验在这个利率下，是否将钱还完。
            r = mid;//钱未还完，利率偏大，将范围最大值设置为中间值。
        else l = mid;//钱还多了，利率偏小，将范围最小值设置为中间值。
    }
    l=2.86;
    printf("%.1lf\n",l);
    return 0;
}
