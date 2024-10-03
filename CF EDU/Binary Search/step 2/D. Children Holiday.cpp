/*
    Author    : MishkatIT
    Created   : Monday 30-09-2024 18:36:49
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

struct node {
    ll t, z, y; // time, limit, rest
};

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int m, n; // balloons, assistants
    cin >> m >> n;
    vector<node> v(n); 
    for (int i = 0; i < n; i++) {
        cin >> v[i].t >> v[i].z >> v[i].y;
    }

    auto get = [&](ll mid) {
        vector<int> now(n);
        int i = 0;
        for (auto& cur : v) {
            ll total = mid;
            ll cnt = 0;
            ll tmp = total / (cur.t * cur.z + cur.y);
            cnt += tmp * cur.z;
            total -= tmp * (cur.t * cur.z + cur.y);
            if (total > 0) {
                cnt += min(total / cur.t, cur.z);
            }
            now[i++] = cnt;
        }
        return now;
    };

    ll l = 0, r = 1e9;
    vector<int> ans;
    while (l < r) {
        ll mid = l + (r - l) / 2;
        vector<int> now = get(mid);
        ll sum = accumulate(now.begin(), now.end(), 0LL);
        if (sum >= m) {
            ans = now;
            r = mid;
        } else {
            l = mid + 1;
        }
    }
    cout << r << '\n';
    for (int i = 0; i < n; i++) {
        if (ans[i] > m) {
            ans[i] = m;
            m = 0;
        } else {
            m -= ans[i];
        }
    }
    int sz = ans.size();
    for (int i = 0; i < sz; i++) {
        cout << ans[i] << " \n"[i == sz - 1];
    }
    return 0;
}