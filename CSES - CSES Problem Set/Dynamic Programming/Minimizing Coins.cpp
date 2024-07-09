/*
    author    : MishkatIT
    created   : Friday 2024-03-08-21.43.58
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
    vector<int> v(n), dp(x + 5, inf);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
        if (v[i] <= x) dp[v[i]] = 1;
    }
    for (int i = 1; i <= x; i++) {
        for (int j = 0; j < n; j++) {
            if (i + v[j] <= x) {
                dp[i + v[j]] = min(dp[i + v[j]], dp[i] + 1);
            }
        }
    }

    if (dp[x] == inf) {
        cout << -1;
    } else {
        cout << dp[x];
    }
    return 0;
}


