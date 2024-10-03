/*
    Author    : MishkatIT
    Created   : Thursday 03-10-2024 18:33:52
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

    int n, d;
    cin >> n >> d;
    vector<int> v(n);
    for (auto& i : v) cin >> i;
    if (d == 1) {
        int pos = 0;
        for (int i = 0; i < n; i++) {
            if (v[i] > v[pos]) {
                pos = i;
            }
        }
        cout << pos + 1 << ' ' << pos + 1 << '\n';
        return 0;
    }
    int s, e;
    auto ok = [&](double mid) {
        s = 0, e = 0;
        vector<double> temp(n), pref(n);
        for (int i = 0; i < n; i++) {
            temp[i] = v[i] - mid;
            pref[i] = temp[i];
        }
        for (int i = 1; i < n; i++) {
            pref[i] += pref[i - 1];
        }
        double minPref = 0;
        for (int i = 0; i < n; i++) {
            if (i >= d - 1) {
                if (i >= d) {
                    double x = pref[i - d];

                    if (x < minPref) {
                        minPref = x;
                        s = i - d + 1;
                    }
                }
                if (pref[i] - minPref >= 0) {
                    e = i;
                    return true;
                }
            }
        }
        return false;
    };

    double lo = 0, hi = 100;
    pair<int, int> ans;
    while (hi - lo > 1e-6){
        double mid = (lo + hi) / 2;
        if (ok(mid)) {
            ans.first = s + 1, ans.second = e + 1;
            lo = mid;
        } else {
            hi = mid;
        }
    }
    cout << ans.first << ' ' << ans.second << '\n';
    return 0;
}