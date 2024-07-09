/*
    author    : MishkatIT
    created   : Wednesday 2024-02-21-18.16.12
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
    int n, m; // tickets, customers.
    cin >> n >> m;
    multiset<int> ms;
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        ms.insert(x);
    }
    vector<int> b(m);
    for (auto& i : b) cin >> i;
    for (int i = 0; i < m; i++) {
        auto it = ms.upper_bound(b[i]);
        if (it == ms.begin()) {
            cout << -1 << '\n';
        } else {
            --it;
            cout << *it << '\n';
            ms.erase(it);
        }
    }
    return 0;
}


