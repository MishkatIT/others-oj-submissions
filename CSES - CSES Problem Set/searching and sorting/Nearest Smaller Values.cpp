/*
    author    : MishkatIT
    created   : Monday 2024-02-26-02.48.07
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

struct x {
    int val, pos;
};

int main()
{
    fio;
    int n;
    cin >> n;
    vector<int> v(n);
    for (auto& i : v) {
        cin >> i;
    }
    stack<x> s;
    for (int i = 0; i < n; i++) {
        while(!s.empty() && s.top().val >= v[i]) {
            s.pop();
        }
        if (s.empty()) {
            cout << "0 ";
        } else {
            cout << s.top().pos << ' ';
        }
        s.push({v[i], i + 1});
    }
    return 0;
}

