/*
    Author    : MishkatIT
    Created   : Friday 03-05-2024 15:10:32
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

    int n, m;
    cin >> n >> m;
    vector<int> v(n + 1);
    for (int i = 1; i <= n; i++) {
        cin >> v[i];
    }
    vector<vector<ll>> dp(n + 1, vector<ll>(m + 1, 0));
    if (v[1] == 0) {
        for (int j = 1; j <= m; j++) {
            dp[1][j] = 1;
        }
    } else {
        dp[1][v[1]] = 1;
    }
    for (int i = 2; i <= n; i++) {
        if (v[i] == 0) {
            for (int j = 1; j <= m; j++) {
                dp[i][j] += dp[i - 1][j];
                if (j - 1 >= 1) {
                    dp[i][j] += dp[i - 1][j - 1];
                }
                if (j + 1 <= m) {
                    dp[i][j] += dp[i - 1][j + 1];
                }
                dp[i][j] %= mod;
            }
        } else {
            dp[i][v[i]] += dp[i - 1][v[i]];
            if (v[i] - 1 >= 1) {
                dp[i][v[i]] += dp[i - 1][v[i] - 1];
            }
            if (v[i] + 1 <= m) {
                dp[i][v[i]] += dp[i - 1][v[i] + 1];
            }
            dp[i][v[i]] %= mod;
        }
    }
    ll ways = 0;
    for (int j = 1; j <= m; j++) {
        ways += dp[n][j];
        ways %= mod;
    }
    cout << ways << '\n';
    return 0;
}