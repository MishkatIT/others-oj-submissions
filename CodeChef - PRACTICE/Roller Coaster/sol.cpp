#include <iostream>
using namespace std;

int main() 
{
    int t;
    cin >> t;
    while(t--)
    {
        int h, mh;
        cin >> h >> mh;
        if(h >= mh)
            cout << "YES" << '\n';
        else
            cout << "NO" << '\n';
    }
	return 0;
}