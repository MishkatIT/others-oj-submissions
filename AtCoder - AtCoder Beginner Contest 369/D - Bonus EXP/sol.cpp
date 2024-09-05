/*
    Author    : MishkatIT
    Created   : Saturday 31-08-2024 19:03:09
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

    int n;
    cin >> n;
    vector<int> v(n + 5);
    for (int i = 1; i <= n; i++) cin >> v[i];
    vector<array<ll, 2>> p(n + 5);

    for (int i = n; i > 0; i--) {
        p[i][i % 2] += v[i];
        p[i][0] += p[i + 1][0];
        p[i][1] += p[i + 1][1];
    }
    ll ans = 0;
    for (int i = 1; i <= n; i++) {
        ans += v[i];
        if (i % 2 == 0) ans += v[i];
    }
    ll x = 0;
    for (int i = 1; i <= n; i++) {
        ll temp = x;
        if (i & 1) {
            temp += p[i + 1][1];
            temp += p[i + 1][0] * 2;
        } else {
            temp += p[i + 1][1] * 2;
            temp += p[i + 1][0] ;
        }
        ans = max(ans, temp);
        x += v[i];
        if (i % 2 == 0) x += v[i];
    }
    cout << ans << '\n';
    return 0;
}

// WA