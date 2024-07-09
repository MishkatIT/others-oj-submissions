/*
    author    : MishkatIT
    created   : Wednesday 2024-02-21-20.28.34
*/

#include<bits/stdc++.h>
#define fio ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define debug(_) cout << #_ << " is " << _ << '\n';

using namespace std;
using ll        = long long;
using ld        = long double;
const ll mod    = 1e9 + 7;
const ll N      = 2e5 + 10;
const ll inf    = 1e9;
const ll linf   = 1e18;

int main()
{
    fio;
    int n;
    cin >> n;
    if (n == 8) {
        cout << "PERFECT";
    } else if (n < 8) {
        cout << "LESS";
    } else {
        cout<< "MORE";
    }
    return 0;
}
