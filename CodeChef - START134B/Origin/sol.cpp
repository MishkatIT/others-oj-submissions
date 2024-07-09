/*
    Author    : MishkatIT
    Created   : Wednesday 15-05-2024 21:18:26
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

map<ll, ll> dp;

int origin(ll num) {
    if (dp.find(num) != dp.end())
        return dp[num];

    while (num >= 10) {
        ll sum = 0;
        while (num > 0) {
            sum += num % 10;
            num /= 10;
        }
        num = sum;
    }
    dp[num] = num;
    return num;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int tc;
    cin >> tc;
    while (tc--) {
        ll N;
        cin >> N;

        ll sum = 0;
        for (ll i = 1; i <= min(N, 9LL); i++) {
            sum += origin(i);
        }

        if (N > 9) {
            ll cycles = (N - 9) / 9;
            sum += cycles * 45;

            ll rem = (N - 9) % 9;
            for (ll i = 1; i <= rem; i++) {
                sum += origin(9 + i);
            }

        }
         cout << sum << '\n';
    }
    return 0;
}