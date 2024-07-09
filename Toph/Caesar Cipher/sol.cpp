/*
    author    : MishkatIT
    created   : Monday 2024-01-15-02.28.10
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
    cin.ignore();
    string str;
    getline(cin, str);
    string x;
    for (char c = 'z'; c >= 'a'; c--) {
        x += c;
    }
    for (auto& i : str) {
        if (i == ' ') {
            cout << ' ';
            continue;
        }
        cout << x[(26 - i  + 'a' + n - 1) % 26];
    }
    return 0;
}
