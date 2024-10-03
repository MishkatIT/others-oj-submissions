/*
    Author    : MishkatIT
    Created   : Wednesday 02-10-2024 19:51:41
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

    int n;
    cin >> n;
    vector<ld> x(n), v(n);
    for (int i = 0; i < n; i++) {
        cin >> x[i] >> v[i];
    }

    auto get = [&](ld mid) {
        ld time = 0;
        for (int i = 0; i < n; i++) {
            time = max(time, abs(mid - x[i]) / v[i]);
        }
        return time;
    };

    ld low = -inf, high = inf;
    //using ternary search
    for (int i = 0; i < 100; i++) {
        ld mid1 = low + (high - low) / 3;
        ld mid2 = high - (high - low) / 3;
        ld time1 = get(mid1);
        ld time2 = get(mid2);
        if (time1 > time2) {
            low = mid1;
        } else {
            high = mid2;
        }
    }
    cout << setprecision(20) << get(low) << '\n';
    return 0;
}