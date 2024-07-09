/*
    author    : MishkatIT
    created   : Thursday 2024-02-22-00.26.09
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
    vector<int> pos(n + 1);
    for (int i = 1; i <= n; i++) {
        int x;
        cin >> x;
        pos[x] = i;
    }
    int inv = 1; // inversion
    for (int i = 1; i + 1 <= n; i++) {
        if (pos[i + 1] < pos[i]) {
            inv++;
        }
    }
    cout << inv << '\n';
    return 0;
}

