/*
    Author    : MishkatIT
    Created   : Wednesday 02-10-2024 20:48:10
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

    int n, k;  // stalls, cows
    cin >> n >> k;
    vector<int> v(n);
    for (auto& i : v) cin >> i;

    auto ok = [&](int dis) {
        int cnt = 1;
        int prv = -1;
        int i = 0;
        while (i < n) {
            if (prv == -1) {
                prv = v[i++];
                continue;
            }
            if (v[i] - prv >= dis) {
                prv = v[i];
                cnt++;
            } 
            i++;
        }
        return cnt >= k;
    };

    int low = 0, high = 1e9;
    int ans = 0;
    while (low <= high) {
        int mid = (low + high) >> 1;
        if (ok (mid)) {
            ans = mid;
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }
    cout << ans << '\n';
    return 0;
}