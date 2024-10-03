/*
    Author    : MishkatIT
    Created   : Monday 30-09-2024 17:18:02
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
    for (auto& i : v) {
        cin >> i;
    }
    auto ok = [&](double m) {
        int cnt = 0;
        for (auto& i : v) {
            cnt += i / m;
        }
        return (cnt >= k);
    };

    double l = 0, r = 1e7;
    for (int i = 0; i < 69; i++) {
        double m = l + (r - l) / 2;
        if (ok(m)) {
            l = m;
        } else {
            r = m;
        }
    }
    cout << setprecision(15) << l << '\n';
    return 0;
}