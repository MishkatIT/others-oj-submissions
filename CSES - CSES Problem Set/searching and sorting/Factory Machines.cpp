/*
    author    : MishkatIT
    created   : Sunday 2024-02-25-23.36.42
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
    ll n, t;
    cin >> n >> t;
    vector<ll> v(n);
    for (auto& i : v) {
        cin >> i;
    }
    ll low = 0, high = 1e18;
    ll ans = linf;
    while(low <= high) {
        ll mid = low + (high - low) / 2LL;
        ll item = 0;
        for (int i = 0; i < n; i++) {
            item += mid / v[i];
            if (item > 1e9) break;
        }
        if (item >= t) {
            ans = min(ans, mid);
            high = mid - 1;
        } else {
            low = mid + 1;
        }
    }
    cout << ans;
    return 0;
}

