/*
    author    : MishkatIT
    created   : Wednesday 2024-02-28-20.34.47
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
        ll n;
        cin >> n;
        ll x = n / 2;
        ll ans = x * (x + 1) / 2;
        ans *= 2;
        if (n & 1) {
            ans += (x + 1);
        }
        cout << ans << '\n';
    }
    return 0;
}
