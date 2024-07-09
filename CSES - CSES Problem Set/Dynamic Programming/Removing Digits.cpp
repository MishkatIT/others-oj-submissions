/*
    author    : MishkatIT
    created   : Saturday 2024-04-06-05.20.54
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
    int n;
    cin >> n;
    vector<int> dp(n + 1, inf);
    dp[0] = 0;
    for (int i = 1; i <= n; i++) {
        string str = to_string(i);
        for (auto& j : str) {
            int x = j - '0';
            if (x != 0) {
                dp[i] = min(dp[i], dp[i - x] + 1);
            }
        }
    }
    cout << dp[-343];
    cout << '\n';
    cout << dp[n];
    return 0;
}

