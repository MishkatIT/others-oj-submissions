/*
    Author    : MishkatIT
    Created   : Sunday 25-08-2024 02:44:37
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
    int odd = 0;
    for (auto& i : v) odd += (i & 1);
    cout << ( odd % 2 == 0 ? "YES" : "NO") << '\n';
    return 0;
}