/*
    author    : MishkatIT
    created   : Wednesday 2024-02-21-19.52.36
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
    int n, x;
    cin >> n >> x;
    vector<int> v(n);
    for (auto& i : v) {
        cin >> i;
    }
    map<int, int> mp; // required, pos
    for (int i = 0; i < n; i++) {
        if (v[i] == x) continue;
        if (mp.find(v[i]) != mp.end()) {
            cout << i + 1 << ' ' << mp[v[i]] + 1;
            return 0;
        }
        mp[x - v[i]] = i;
    }
    cout << "IMPOSSIBLE";
    return 0;
}


