/*
    Author    : MishkatIT
    Created   : Sunday 25-08-2024 03:05:16
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

    ll a , b, c;
    cin >> a >> b >> c;
    if (a > c) swap(a, c);
    ll ans = 0;
    if (b < a) {
        ans += a - b;
        b = a;
    }
    if (c < b) {
        ans += b - c;
        c = b;
    }
    if (b - a <= c - b) {
        ans += a + (c - a + 1) / 2 - b;
        b = a + (c - a + 1) / 2;
    }
    if (b - a != c - b) {
        ans += b - a - c + b;
    }
    cout << ans << '\n';
    return 0;
}