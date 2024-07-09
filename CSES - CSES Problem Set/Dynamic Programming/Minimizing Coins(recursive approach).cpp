/*
    author    : MishkatIT
    created   : Tuesday 2024-04-02-19.05.51
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

vector<int> dp;

int minimum (int n, vector<int>& coin, int x) {
    if (x == 0) return 0;
    if (dp[x] != -1) return dp[x];
    int mn = inf;
    for (int i = 0; i < n; i++) {
        if (x >= coin[i]) {
            mn = min(mn, minimum(n, coin, x - coin[i]) + 1);
        }
    }
    return dp[x] = mn;
}


int main()
{
    fio;
    int n, x;
    cin >> n >> x;
    dp.resize(x + 5, -1);
    vector<int> coin(n);
    for (auto& i : coin) {
        cin >> i;
    }
    int ans = minimum(n, coin, x);
    cout << (ans == inf ? -1 : ans);
    return 0;
}


