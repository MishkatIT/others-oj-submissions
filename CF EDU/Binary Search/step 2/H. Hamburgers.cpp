/*
    Author    : MishkatIT
    Created   : Wednesday 02-10-2024 00:03:26
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
const int mod = 1e9 + 7;
const int N = 2e5 + 10;
const int inf = 1e9;
const ll linf = 1e18;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string str;
    cin >> str;
    string x = "BSC";
    vector<int> have(3);
    for (auto& i : have) cin >> i;
    vector<int> price(3);
    for (int i = 0; i < 3; i++) {
        cin >> price[i];
    }
    ll r;
    cin >> r;
    map<char, int> cnt;
    for (auto& i : str) {
        cnt[i]++;
    }
    auto ok = [&](ll target) {
        ll req = 0;
        for (int i = 0; i < 3; i++) {
            req += max(0LL, price[i] * (target * cnt[x[i]] - have[i]));
        }
        return req <= r;
    };
    ll low = 0, high = 1e15;
    while (low < high) {
        ll mid = (low + high + 1) >> 1;
        if (ok(mid)) {
            low = mid;
        } else {
            high = mid - 1;
        }
    }
    cout << low << '\n';
    return 0;
}