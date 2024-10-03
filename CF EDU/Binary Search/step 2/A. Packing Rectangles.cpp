
/*
    Author    : MishkatIT
    Created   : Sunday 29-09-2024 22:11:02
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

    ll w, h, n;
    cin >> w >> h >> n;

    auto ok = [&](ll x) {
        return (x / w) * (x / h) >= n;
    };

    ll low = max(w, h), high = 1;
    while (!ok(high)) {
        high *= 2;
    }
    ll ans = 0;
    while (low <= high) {
        ll mid = low + (high - low) / 2;
        if (ok(mid)) {
            ans = mid;
            high = mid - 1;
        } else {
            low = mid + 1;
        }

    }
    cout << ans << '\n';
    return 0;
}