/*
    Author    : MishkatIT
    Created   : Saturday 24-08-2024 18:59:42
*/

#include <bits/stdc++.h>
using namespace std;

#ifdef LOCAL
#include "algo/debug.h"
#else
#define debug(...) 42
#endif

using ll = long long;
using ld = long double;
const int mod = 1e9 + 7;
const int N = 2e5 + 10;
const int inf = 1e9;
const ll linf = 1e18;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll n, k;
    cin >> n >> k;
    map<ll, ll> mp;
    for (int i = 0; i < n; i++) {
        int a, b;
        cin >> a >> b;
        mp[a] += b;
    }
    ll ans;
    ll x = 0;
    for (auto& zz : mp) {
        if (x + zz.second < k) x += zz.second;
        else {
            ans = zz.first; break;
        }
    }
    cout << ans << '\n';
    return 0;
}