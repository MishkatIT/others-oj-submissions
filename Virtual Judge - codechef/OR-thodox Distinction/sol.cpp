/*
    Author    : MishkatIT
    Created   : Friday 09-08-2024 19:59:56
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

    int tc;
    cin >> tc;
    while (tc--) {
        int n;
        cin >> n;
        vector<int> v(n);
        for (auto& i : v) {
            cin >> i;
        }
        sort(v.begin(), v.end());
        int ans = 0;
        for (int i = 0; i < n - 1; i++) {
            ans |= v[i];
        }
        cout << (ans != v.back() ? "YES" : "NO") << '\n';
    }
    return 0;
}