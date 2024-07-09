/*
    author    : MishkatIT
    created   : Saturday 2022-12-24-22.43.28
*/
#include<bits/stdc++.h>
#define fio ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
int main()
{
    fio;
    int t;
    cin >> t;
    while(t--)
    {
        int x ;
        cin >> x;
        int a, b;
        int power = log2(x);
        power++;
        long long last = pow(2, power);
        cout << 0 << ' ' << x << ' ' << setprecision(100) << last + x << '\n';
    }
    return 0;
}
