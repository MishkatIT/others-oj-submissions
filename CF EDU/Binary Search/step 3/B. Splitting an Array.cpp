/*
    Author    : MishkatIT
    Created   : Wednesday 02-10-2024 20:21:54
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

    int n, k;
    cin >> n >> k;
    vector<int> v(n);
    for (auto& i : v) cin >> i;

    auto ok = [&](ll sum) {
        ll temp = 0;
        int seg = 1;
        for (int i = 0; i < n; i++) {
            if (v[i] + temp <= sum) {
                temp += v[i];
            } else {
                if (v[i] > sum) return false;
                seg++;
                temp = v[i];
            }
        }
        return seg <= k;
    };

    ll low = 1, high = 1e14;
    ll ans = high;
    while (low <= high) {
        ll sum = (low + high) / 2;
        if (ok(sum)) {
            ans = sum;
            high = sum - 1;
        } else {
            low = sum + 1;
        }
    }
    cout << ans << '\n';
    return 0;
}