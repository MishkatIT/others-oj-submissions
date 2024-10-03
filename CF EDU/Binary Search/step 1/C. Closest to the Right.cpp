/*
    Author    : MishkatIT
    Created   : Saturday 28-09-2024 16:23:01
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
    while (k--) {
        int x;
        cin >> x;
        cout << lower_bound(v.begin(), v.end(), x) - v.begin() + 1 << '\n';
    }

    return 0;
}