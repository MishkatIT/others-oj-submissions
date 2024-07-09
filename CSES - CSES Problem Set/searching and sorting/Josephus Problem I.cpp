/*
    author    : MishkatIT
    created   : Thursday 2024-01-18-01.59.29
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
    vector<bool> v(n + 5, true);
    int cnt = n;
    int x = 0;
    while(cnt) {
        int two = 2;
        while(two) {
            if (x >= n) {
                x = 0;
            }
            x++;
            if(v[x])two--;
        }
        cout << x << ' ';
        v[x] = false;
        cnt--;
    }
    return 0;
}
