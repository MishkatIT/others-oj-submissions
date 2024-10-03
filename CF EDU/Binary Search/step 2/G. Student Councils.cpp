/*
    Author    : MishkatIT
    Created   : Tuesday 01-10-2024 02:07:30
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

    int k, n;
    cin >> k >> n;
    vector<ll> v(n);
    for (auto& i : v) cin >> i;

    auto ok = [&](ll m) {
        ll sum = 0;
        for (auto& i : v) {
            sum += min(i, m);
        }
        return (sum / m >= k);
    };

    ll l = 0, r = 1e12;
    while (l < r) {
        ll m = (l + r + 1) >> 1;
        if (ok(m)) {
            l = m;
        } else {
            r = m - 1;
        }
    }
    cout << l << '\n';
    return 0;
}