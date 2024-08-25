/*
    Author    : MishkatIT
    Created   : Sunday 25-08-2024 02:51:13
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

    int n;
    cin >> n;
    vector<int> v(n);
    for (auto& i : v) {
        cin >> i;
    }

    int a = v[0];
    int skip = v[0];
    for (int i = 0; i < n; i++) {
        if (a == v[i]) continue;
        if (a < v[i]) {
            a = v[i], skip = a;
        }
        else {
            skip = a; break;
        }
    }
    vector<int> ans;
    for (auto& i : v) if (i != skip) ans.push_back(i);
    int sz = ans.size();
    for (int i = 0; i < sz; i++) {
        cout << ans[i] << " \n"[i == sz - 1];
    }
    return 0;
}