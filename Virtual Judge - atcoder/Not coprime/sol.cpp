/*
    Author    : MishkatIT
    Created   : Sunday 25-08-2024 18:03:24
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

int lcm(int a, int b) {
    return (a / __gcd(a, b)) * b;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    vector<ll> v(n);
    for (auto& i : v) {
        cin >> i;
    }

    vector<int> primes = {2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47};
    ll ans = linf;

    auto ok = [&](ll cur) {
        bool good = true;
        for (auto& i : v) {
            good &= (__gcd(i, cur) > 1);
        }
        return good;
    };

    for (int i = 1; i < (1 << 15); i++) {
        ll cur = 1;
        for (int j = 0; j < 15; j++) {
            if (i & (1 << j)) {
                cur *= primes[j];
            }
        }
        if (ok(cur)) {
            ans = min(ans, cur);
        }
    }
    cout << ans << '\n';
    return 0;
}