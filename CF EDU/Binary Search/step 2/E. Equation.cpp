/*
    Author    : MishkatIT
    Created   : Tuesday 01-10-2024 01:25:01
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

    double c;
    cin >> c;

    auto get = [&](double mid) {
        return mid * mid + sqrtl(mid);
    };

    double low = 0, high = 1e5;
    for (int i = 0; i < 66; i++) {
        double mid = (low + high) / 2;
        double cur = get(mid);
        if (cur > c) {
            high = mid;
        } else {
            low = mid;
        }
    }
    cout << setprecision(20) << low << '\n';
    return 0;
}