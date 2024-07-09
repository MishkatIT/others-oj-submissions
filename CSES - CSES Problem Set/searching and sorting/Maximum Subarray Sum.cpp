/*
    author    : MishkatIT
    created   : Wednesday 2024-02-21-20.00.17
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
    vector<ll> v(n);
    for (auto& i : v) {
        cin >> i;
    }

    // using Kadane's algo...

    ll mxSum = -linf, sum = 0;
    for (int i = 0; i < n; i++) {
        sum += v[i];
        mxSum = max(mxSum, sum);
        sum = max(sum, 0LL);  // not beneficial to carry negative sum.
    }
    cout << mxSum;
    return 0;
}

