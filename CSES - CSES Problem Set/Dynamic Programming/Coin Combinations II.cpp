/*
    author    : MishkatIT
    created   : Saturday 2024-03-09-00.22.16
*/

#include<bits/stdc++.h>
#define fio ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define debug(_) cout << #_ << " is " << _ << '\n';

using namespace std;
using ll        = long long;
using ld        = long double;
const ll mod    = 1e9 + 7;
const ll N      = 2e5 + 10;
const ll inf    = 1e9;
const ll linf   = 1e18;
int main()
{
    fio;
    int n, x;
    cin >> n >> x;
    vector<ll> c(n);
    for (auto& i : c) cin >> i;
    vector<vector<int>> dp(n + 5, vector<int>(x + 5));
    for (int i = 0; i < n; i++) {
        dp[i][0] = 1;
    }
    for (int i = n - 1; i >= 0; i--) {
        for (int j = 1; j <= x; j++) {
            int take = 0;
            if (j >= c[i]) {
                take = dp[i][j - c[i]];
            }
            int notTake = dp[i + 1][j];
            dp[i][j] = (take + notTake) % mod;
        }
    }
    cout << dp[0][x];
    return 0;
}
