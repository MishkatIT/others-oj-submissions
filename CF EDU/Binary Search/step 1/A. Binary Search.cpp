/*
    Author    : MishkatIT
    Created   : Saturday 28-09-2024 16:11:32
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

    auto bs = [&](int sotruzzz) {
        int low = 0, high = n - 1;
        while (low <= high) {
            int mid = low + (high - low) / 2;
            if (v[mid] < sotruzzz) {
                low = mid + 1;
            } else if (v[mid] > sotruzzz) {
                high = mid - 1;
            } else {
                return true;
            }
        }
        return false;
    };
    for (int i = 0; i < k; i++) {
        int x;
        cin >> x;
        cout << (bs(x) ? "YES" : "NO") << '\n';
    }

    return 0;
}