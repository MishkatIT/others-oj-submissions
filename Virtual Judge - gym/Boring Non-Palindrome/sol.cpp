/*
    Author    : MishkatIT
    Created   : Wednesday 17-07-2024 01:46:50
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

    string str;
    cin >> str;
    int n = str.size();
    for (int i = 0; i < n; i++) {
        bool ok = true;  
        for (int j = 0; j < (n - i) / 2; j++) {
            ok &= (str[i + j] == str[n - 1 - j]);
        }
        if (ok) {
            cout << str;
            string x = str.substr(0, i);
            reverse(x.begin(), x.end());
            cout << x << '\n';
            return 0;
        } 
    }
    return 0;
}
