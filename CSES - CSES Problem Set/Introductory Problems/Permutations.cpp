/*
    author    : MishkatIT
    created   : Sunday 2024-01-28-01.46.37
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
    if (n == 2 || n == 3) {
        cout << "NO SOLUTION";
    } else {
        for (int i = 2; i <= n; i += 2) {
            cout << i << ' ';
        }
        for (int i = 1; i <= n; i += 2) {
            cout << i << ' ';
        }
    }
    return 0;
}


