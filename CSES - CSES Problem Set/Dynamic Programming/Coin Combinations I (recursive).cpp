/*
    author    : MishkatIT
    created   : Tuesday 2024-04-02-23.43.19
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

int n;
vector<int> coin;
vector<ll> dp;

ll ways (int x) {
    if (x == 0) return 1;
    if (dp[x] != -1) return dp[x];
    ll cnt = 0;
    for (int i = 0; i < n; i++) {
        if (x >= coin[i]) {
            cnt += ways(x - coin[i]);
        }
    }
    return dp[x] = cnt % mod;
}

int main()
{
    fio;
    int x;
    cin >> n >> x;
    coin.resize(n);
    dp.resize(x + 5, -1);
    for (auto& i : coin) {
        cin >> i;
    }
    ways(x);
    cout << dp[x];
    return 0;
}

