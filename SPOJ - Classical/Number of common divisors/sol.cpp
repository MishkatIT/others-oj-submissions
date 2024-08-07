/*
    author    : MishkatIT
    created   : Friday 2023-12-08-21.51.22
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
        int a, b;
        cin >> a >> b;
        int g = __gcd(a, b);
        int ans = 0;
        for (int i = 1; i * i <= g; i++) {
            if (g % i == 0) {
                ans++;
                if (g / i != i) ans++;
            }
        }
        cout << ans << '\n';
    }
    return 0;
}

