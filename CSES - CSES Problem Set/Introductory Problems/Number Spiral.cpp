/*
    author    : MishkatIT
    created   : Friday 2024-03-29-23.49.10
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
    int t;
    cin >> t;
    while (t--) {
        ll n, m;
        cin >> n >> m;
        if (n > m) {
            if (n & 1) {
                cout << (n - 1) * (n - 1) + m << '\n';
            } else {
                cout << n * n - (m - 1) << '\n';
            }
        } else {
            if (m & 1) {
                cout << m * m - (n - 1) << '\n';
            } else {
                cout << (m - 1) * (m - 1) + n << '\n';
            }
        }
    }
    return 0;
}


