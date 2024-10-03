/*
    Author    : MishkatIT
    Created   : Thursday 03-10-2024 20:55:13
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

struct idx{
    int l, r;
};

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, k;
    cin >> n >> k;
    vector<idx> seg(n);
    for (auto& i : seg) {
        cin >> i.l >> i.r;
    }
    int equal;
    auto get = [&](ll mid) {
        ll cnt = 0;
        equal = 0;
        for (auto& cur : seg) {
            if (cur.l > mid) continue;
            if (cur.r < mid) {
                cnt += cur.r - cur.l + 1;
            } else {
                cnt += mid - cur.l;
                equal++;
            }
        }
        return cnt;
    };

    ll low = -2e9, high = 2e9;
    while (low <= high) {
        ll mid = low + (high - low) / 2;
        ll cnt = get(mid);
        if (cnt > k) {
            high = mid - 1;
        } else {
            if (cnt + equal > k) {
                cout << mid;
                return 0;
            } else {
                low = mid + 1;
            }
        }
    }
    return 0;
}