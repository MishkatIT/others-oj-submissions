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
    vector<int> ans(m);
    int i = 0;
    for (int j = 0; j < m; j++) {
        while (i < n && a[i] < b[j]) i++;
        ans[j] = i;
    }
    for (int i = 0; i < m; i++) {
        cout << ans[i] << " \n"[i == m - 1];
    }
    return 0;
}