/*
    author    : MishkatIT
    created   : Wednesday 2024-02-21-20.34.55
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
        int idx = -1;
        int mx = 0;
        for (int i = 0; i < 22; i++) {
            int a, b;
            cin >> a >> b;
            if (a + b * 20 > mx) {
                idx = i + 1;
                mx = a + b * 20;
            }
        }
        cout << idx << '\n';
    }
    return 0;
}
