/*
    author    : MishkatIT
    created   : Sunday 2022-11-13-02.21.56
    problem   : PRB01
*/
#include<iostream>
#include<cmath>
#define fio ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
int main()
{
    fio;
    int t;
    cin >> t;
    while(t--)
    {
        bool ok = true;
        int n;
        cin >> n;   
        if(n < 2)
            ok = false;
        for(int i = 2; i * i <= n; i++)
        {
            if(n % i == 0)
            {
                ok = false;
                break;
            }
        }
        cout << (ok ? "yes" : "no") << '\n';
    }
    return 0;
}


