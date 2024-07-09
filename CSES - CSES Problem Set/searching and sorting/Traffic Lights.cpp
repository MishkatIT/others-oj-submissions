/*
    author    : MishkatIT
    created   : Sunday 2024-02-25-02.52.54
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
    int x, n;
    cin >> x >> n;
    vector<int> v(n);
    for (auto& i : v) {
        cin >> i;
    }

    set<int> rng; // range
    rng.insert(0), rng.insert(x);
    multiset<int, greater<int>> mx;
    mx.insert(x);
    for (auto& i : v) {
        rng.insert(i);
        auto pos = rng.find(i);
        int pre = *prev(pos);
        int nxt = *next(pos);
        mx.erase(mx.find(nxt - pre));
        mx.insert(*pos - pre), mx.insert(nxt - *pos);
        cout << *mx.begin() << ' ';
    }

    return 0;
}


