/*
    author    : MishkatIT
    created   : Wednesday 2024-02-21-18.28.02
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
    n *= 2;
    vector<pair<int, int>> v(n);
    for (int i = 0, j = 0; i < n; i++) {
        cin >> v[i].first;
        v[i].second = j;
        j += (i & 1);
    }

    sort(v.begin(), v.end());
    int ans = 0, curMx = 0;
    vector<bool> seen(n + 5);

    for (int i = 0; i < n; i++) {
        if (seen[v[i].second]) {
            curMx--;
        } else {
            seen[v[i].second] = true;
            curMx++;
            ans = max(ans, curMx);
        }
    }
    cout << ans;
    return 0;
}


