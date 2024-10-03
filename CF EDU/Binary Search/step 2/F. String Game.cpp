/*
    Author    : MishkatIT
    Created   : Tuesday 01-10-2024 01:37:54
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

    string t, p;
    cin >> t >> p;
    vector<int> pos(t.size());
    for (auto& i : pos) cin >> i;

    auto ok = [&](int mid) {
        string tmp = t;
        for (int x = 0; x < mid; x++) {
            tmp[pos[x] - 1] = '#';
        }
        int i = 0, j = 0;
        while (i < t.size()) {
            if (tmp[i] == p[j]) {
                j++;
                if (j == p.size()) return true;
            }
            i++;
        }
        return false; 
    };
    
    int low = 0, high = t.size() - p.size();
    int ans = 0;
    while (low <= high) {
        int mid = low + (high - low) / 2;
        if (ok(mid)) {
            low = mid + 1;
            ans = mid;
        } else { 
            high = mid - 1;
        }
    }
    cout << ans << '\n';
    return 0;
}