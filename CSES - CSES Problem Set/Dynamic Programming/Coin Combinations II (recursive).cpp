#include<bits/stdc++.h>
#define fio ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define debug(_) cout << #_ << " is " << _ << '\n';

using namespace std;
using ll = long long;
const ll mod = 1e9 + 7;
#define int long long
vector<int> dp;

int ways(int n, vector<int>& coin, int idx, int x) {
    if (x == 0) return 1;
    if (x < 0 || idx >= n) return 0;
    if (dp[x] != -1) return dp[x];

    int cnt = 0;
    cnt = (cnt + ways(n, coin, idx + 1, x)) % mod; // Take the current coin
    cnt = (cnt + ways(n, coin, idx, x - coin[idx])) % mod;     // Skip the current coin

    return dp[x] = cnt;
}

signed main() {
    fio;
    int n, x;
    cin >> n >> x;
    dp.assign(x + 1, -1);
    vector<int> coin(n);
    for (auto& i : coin) {
        cin >> i;
    }
    cout << ways(n, coin, 0, x) << endl;
    return 0;
}
// wrong ans.
