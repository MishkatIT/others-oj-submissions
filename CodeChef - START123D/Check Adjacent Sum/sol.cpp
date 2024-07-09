/*
    author    : MishkatIT
    created   : Wednesday 2024-02-28-21.33.49
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
    int t;
    cin >> t;
    while (t--) {
        int n, q;
        cin >> n >> q;
        vector<ll> v(n);
        for (auto& i : v) {
            cin >> i;
        }
        while(q--) {
            ll x;
            cin >> x;
            bool ok = false;
            for (int i = 0; i < n; i++) {
                for (int j = i + 1; j < n; j++) {
                    ll sum = v[i] + v[j];
                    for (int k = 0; k < n; k++) {
                        if (k == i || k == j) continue;
                        sum += (v[k] * 2);
                    }
                    if (sum == x) {
                        cout << v[i] << ' ';
                        for (int z = 0; z < n; z++) {
                            if (z == i || z == j) continue;
                            cout << v[z] << ' ';
                        }
                        cout << v[j] << '\n';
                        ok = true;
                        break;
                    }
                    if (ok) break;
                }
                if (ok) break;
            }
            if (!ok) cout << -1 << '\n';
        }
    }
    return 0;
}

