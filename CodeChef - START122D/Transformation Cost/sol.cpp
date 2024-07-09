/*
    author    : MishkatIT
    created   : Wednesday 2024-02-21-20.54.05
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

bool have(string x) {
    string mm = "101";
    int it = 0;
    for (int i = 0; i < x.length(); i++) {
        if (x[i] == mm[it]) {
            it++;
        }
        if (it == 3) {
            return true;
        }
    }
    return false;
}

int main()
{
    fio;
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        string b;
        while(n) {
            if (n & 1) {
                b += '1';
            } else {
                b += '0';
            }
            n /= 2;
        }
        reverse(b.begin(), b.end());
//        debug(b)
        ll ans = 0;
        int len = b.size();
        while(have(b)) {
            int mrk = -1;
            for (int i = len - 1, j = 0; i >= 0; i--, j++) {
                if (b[i] == '1') {
                    if (mrk == -1) {
                        mrk = j;
                    }
                } else {
                    if (mrk != -1) {
                        b[i] = '1';
//                        debug(b)
                        for (int z = i + 1; z < len; z++) {
                            b[z] = '0';
                        }
                        break;
                    }
                }
            }
            ans += (1LL << mrk);
        }
        cout << ans << '\n';
    }
    return 0;
}
