/*
    Author    : MishkatIT
    Created   : Sunday 25-08-2024 19:48:44
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

    int k;
    cin >> k;
    ll ans = 0;
    for (int a = 1; a <= k; a++) {
        for (int b = 1; b <= k / a; b++) {
            int c = k / (a * b);
            ans += c;
        }
    }
    cout << ans << '\n';

    return 0;
}