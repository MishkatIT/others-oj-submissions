/*
    Author    : MishkatIT
    Created   : Friday 04-10-2024 00:32:19
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

    int n, m;
    cin >> n >> m;
    vector<int> a(n);
    for (auto& i : a) {
        cin >> i;
    }
    vector<int> b(m);
    for (auto& i : b) {
        cin >> i;
    }
    ll ans = 0;
    int i = 0, j = 0;
    while (i < n && j < m) {
        if (a[i] == b[j]) {
            ll cnta = 1, cntb = 1;
            while (i + 1 < n && a[i + 1] == a[i]) i++, cnta++;
            while (j + 1 < m && b[j + 1] == b[j]) j++, cntb++;
            ans += cnta * cntb;
            i++, j++;
        } else if (a[i] < b[j]) {
            i++;
        } else {
            j++;
        }
    } 
    cout << ans << '\n';
    return 0;
}