/*
    author    : MishkatIT
    created   : Wednesday 2023-11-15-21.09.53
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
    int t = 1;
//    cin >> t;
    while (t--) {
        vector<ll> v(4);
        for (auto& i: v) {
            cin >> i;
        }
        v[0] += v[2];
        v[1] += v[3];
        if (v[0] > v[1]) {
            cout << "Dominater";
        } else {
            cout << "Everule";
        }

    }
    return 0;
}
