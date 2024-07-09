/*
    Author    : MishkatIT
    Created   : Tuesday 30-04-2024 17:17:40
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

    int n, x;
    cin >> n >> x;
    vector<int> price(n + 1), page(n + 1);
    for (int i = 1; i <= n; i++) {
        cin >> price[i];
    }
    for (int i = 1; i <= n; i++) {
        cin >> page[i];
    }
    vector<vector<int>> dp(n + 1, vector<int> (x + 1));
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= x; j++) {
            int notTake = dp[i - 1][j];
            int take = 0;
            if (j - price[i] >= 0) {
                take += page[i] + dp[i - 1][j - price[i]];
            }
            dp[i][j] = max(take, notTake);
        }
    }
    cout << dp[n][x] << '\n';
    return 0;
}