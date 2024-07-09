/*
    author    : MishkatIT
    created   : Sunday 2024-02-25-02.30.35
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
    int n;
    cin >> n;
    vector<int> v(n);
    for (auto& i : v) {
        cin >> i;
    }
    multiset<int> ms;
    for (auto& i : v) {
        auto it = ms.upper_bound(i);
        if (it != ms.end()) {
            ms.erase(it);
        }
        ms.insert(i);
    }
    cout << ms.size();
    return 0;
}


