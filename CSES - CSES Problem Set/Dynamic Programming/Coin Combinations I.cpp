/*
    author    : MishkatIT
    created   : Friday 2024-03-08-22.09.34
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
    vector<ll> coinAll(n), dp(x + 5, 0);
    for (auto& i : coinAll) {
        cin >> i;
    }
    dp[0] = 1;
    for (int sum = 1; sum <= x; sum++) {
        for (auto& coin : coinAll) {
            if (sum >= coin) {
                dp[sum] = (dp[sum] + dp[sum - coin]) % mod;
            }
        }
    }

    cout << dp[x];
    return 0;
}


