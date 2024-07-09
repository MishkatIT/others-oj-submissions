/*
    Author    : MishkatIT
    Created   : Wednesday 03-07-2024 20:44:38
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
const ll mod = 1e9 + 7;
const ll N = 2e5 + 10;
const ll inf = 1e9;
const ll linf = 1e18;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int tc;
    cin >> tc;
    while (tc--) {
        ll n, k, h;
        cin >> n >> k >> h;
        ll ans = 0;
        if (n >= h) {
            ans = (n - h + 1) * n;
        }
        for (ll a = 1; a < h && a < n; a++) {
            ll low = 1, high = a - 1;
            ll cur = -1;
            while (low <= high) {
                ll b = low + (high - low) / 2;
                ll p = a - b + 1;
                if (k * p >= h) {
                    cur = b;
                    low = b + 1;
                } else {
                    high = b - 1;
                }
            }
            if (cur != -1) {
                ans += cur;
            }
        }
        cout << ans << '\n';
    }
    return 0;
}