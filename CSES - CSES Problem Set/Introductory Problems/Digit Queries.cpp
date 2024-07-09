/*
    author    : MishkatIT
    created   : Friday 2024-03-29-20.45.18
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
        ll k;
        cin >> k;
        ll digit = 1;
        ll ten = 1;
        while (9 * ten * digit < k) {
            k -= (9 * ten * digit);
            ten *= 10;
            digit++;
        }
        ll target = ten - 1;
        target += (k + digit - 1) / digit;
        string x = to_string(target);
        k %= digit;
        if (k == 0) k = x.size();
        cout << x[k - 1] << '\n';
    }
    return 0;
}


