/*
    Author    : MishkatIT
    Created   : Tuesday 14-05-2024 00:25:59
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

    string a, b;
    cin >> a >> b;
    int n = a.size(), m = b.size();

    vector<vector<int>> dp(n + 1, vector<int>(m + 1));

    for (int i = 0; i <= n; i++) {
        dp[i][0] = i;
    }
    for (int j = 0; j <= m; j++) {
        dp[0][j] = j;
    }

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) {
            dp[i][j] = min({dp[i][j - 1], dp[i - 1][j], dp[i - 1][j - 1]}) + 1;
            if (a[i - 1] == b[j - 1]) {
                dp[i][j] = dp[i - 1][j - 1];
            }
        }
    }

    cout << dp[n][m] << '\n';
    return 0;
}