#include <iostream>
#include <string>
using namespace std;
int main() 
{
    int n, man;  
    string m ;  
    string in;
    cin >> n;
	for (int i = 1; i <= n; i++) 
	{
        cin >> in;
        int inSize = in.size();
        int maxSize = m.size();
        
        if (inSize > maxSize || (inSize == maxSize && in > m))  
	    {
            m = in;
            man = i;
        }
        
    }
    cout << man << endl << m << endl;
    return 0;
}
