/*
    Author    : MishkatIT
    Created   : Thursday 06-06-2024 20:06:49
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


ll calc(ll limit, ll num) {
    ll n = limit / num;
    return n * ((2 * num) + (n - 1) * num) / 2;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int tc;
    cin >> tc;
    while (tc--) {
        int limit;
        cin >> limit;
        ll sum = 0;
        sum += calc(limit - 1, 3);
        sum += calc(limit - 1, 5);
        sum -= calc(limit - 1, 3 * 5);
        cout << sum << '\n';
    }
    return 0;
}