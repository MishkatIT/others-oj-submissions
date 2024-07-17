/*
    Author    : MishkatIT
    Created   : Wednesday 17-07-2024 02:33:41
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
        string x = "abcdefghijklmnopqrstuvwxyz";
        string p;
        cin >> p;
        bool ok = true;
        int idx = p.front() - 'a';
        for (auto& c : p) {
            if (c != x[idx % 26]) {
                ok = false;
                break;
            }
            idx++;
        }
        cout << (ok ? "YES" : "NO") << '\n';
    }
    return 0;
}