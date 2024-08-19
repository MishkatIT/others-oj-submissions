/*
    Author    : MishkatIT
    Created   : Monday 19-08-2024 22:14:51
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
        string str;
        cin >> str;
        string x = str;
        reverse(x.begin(), x.end());
        int j = 0;
        for (int i = 0; i < str.size(); i++) {
            if (str[i] == x[j]) {
                j++;
            }
        }
        cout << str.size() - j << '\n';
    }
    return 0;
}