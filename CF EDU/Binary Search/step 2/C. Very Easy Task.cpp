/*
    Author    : MishkatIT
    Created   : Monday 30-09-2024 17:55:41
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

    int n, x, y;
    cin >> n >> x >> y;
    auto ok = [&](int m) {
        return m / x + m / y;
    };
    n--;
    int l = 0, r = 1e9;
    int ans = 0;
    while (l <= r) {
        int m = l + (r - l) / 2;
        if (ok(m) >= n) {
            ans = m;
            r = m - 1;
        } else {
            l = m + 1;
        }
    }
    
    cout << ans + min(x, y) << '\n';
    return 0;
}