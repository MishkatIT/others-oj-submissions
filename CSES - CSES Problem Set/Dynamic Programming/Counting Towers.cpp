/*
    Author    : MishkatIT
    Created   : Monday 13-05-2024 19:03:30
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
const ll N = 1e6 + 10;
const ll inf = 1e9;
const ll linf = 1e18;


vector<vector<int>> dp(N, vector<int>(2, 0)); // current,  partial / full}
void pre() {
    dp[1][0] = dp[1][1] = 1;
    for (int i = 2; i < N; i++) {
        ll choice1 = (dp[i - 1][0] + dp[i - 1][1]) % mod; // not take
        ll choice2 = dp[i - 1][0];                        // take all partial
        ll choice3 = (dp[i - 1][0] + dp[i - 1][0]) % mod; // take partial

        dp[i][0] = (choice1 + choice2 + choice3) % mod;

        ll choice4 = dp[i - 1][1]; // take all full

        dp[i][1] = (choice1 + choice4) % mod;
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    pre();

    int tc;
    cin >> tc;
    while (tc--) {
        int n;
        cin >> n;
        cout << (dp[n][0] + dp[n][1]) % mod << '\n';
    }
    return 0;
}