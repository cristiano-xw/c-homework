#include <iostream>
#include <set>
 
using namespace std;
 
int main()
{
     set<int> s;
     s.insert(1);
     //s.insert(2) ;
     s.insert(3);
     s.insert(5);
     cout<<*s.lower_bound(4)<<endl;
     cout<<*s.lower_bound(3)<<endl;
     cout<<*s.upper_bound(5)<<endl;
     return 0;
}
