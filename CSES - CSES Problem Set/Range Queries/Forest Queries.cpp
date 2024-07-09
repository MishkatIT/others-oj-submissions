/*
    author    : MishkatIT
    created   : Monday 2024-03-25-20.30.39
*/

#include<bits/stdc++.h>
#define fio ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define debug(_) cout << #_ << " is " << _ << '\n';

using namespace std;
using ll        = long long;
using ld        = long double;
const ll mod    = 1e9 + 7;
const ll N      = 2e5 + 10;
const ll inf    = 1e9;
const ll linf   = 1e18;

int main()
{
    fio;
    int n, q;
    cin >> n >> q;
    char a[n][n];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> a[i][j];
        }
    }
    int pref [n + 5][n + 5];
    memset(pref, 0, sizeof pref);

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            pref[i][j] += pref[i][j - 1] + (a[i - 1][j - 1] == '*');
        }
    }
    for (int j = 1; j <= n; j++) {
        for (int i = 1; i <= n; i++) {
            pref[i][j] += pref[i - 1][j];
        }
    }

    while(q--) {
        int x1, x2, y1, y2;
        cin >> x1 >> x2 >> y1 >> y2;
        cout << pref[y1][y2] - pref[x1 - 1][y2] - pref[y1][x2 - 1] + pref[x1 - 1][x2 - 1] << '\n';
    }
    return 0;
}


