/*
    author    : MishkatIT
    created   : Monday 2024-02-26-02.39.15
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
    vector<pair<int, int>> v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i].first;
        v[i].second = i;
    }
    sort(v.begin(), v.end());
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            int rem = x - v[i].first - v[j].first;
            int l = j + 1, r = n - 1;
            while(l < r) {
                if (v[l].first + v[r].first < rem) {
                    l++;
                } else if (v[l].first + v[r].first > rem) {
                    r--;
                } else {
                    cout << v[i].second + 1 << ' ' << v[j].second + 1 << ' ' << v[l].second + 1 << ' ' << v[r].second + 1;
                    return 0;
                }
            }
        }
    }
    cout << "IMPOSSIBLE";
    return 0;
}

