/*
    author    : MishkatIT
    created   : Sunday 2024-02-25-16.46.01
*/

#include<bits/stdc++.h>
#define fio ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define debug(_) cout << #_ << " is " << _ << '\n';

using namespace std;

#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;

// Ordered ms (Ascending Order)
template <typename T>
using ordered_multiset = tree<T, null_type, less_equal<T>, rb_tree_tag, tree_order_statistics_node_update>;

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
    vector<array<int, 3>> v(n + 1);
    for (int i = 1; i <= n; i++) {
        cin >> v[i][0] >> v[i][1];
        v[i][2] = i;
    }
    sort(v.begin(), v.end(), [&](auto& a, auto& b) {
        return a[0] < b[0] || (a[0] == b[0] && a[1] > b[1]);
    });

    ordered_multiset<int> ms;

    vector<int> contains(n + 5);
    for (int i = n; i > 0; i--) {
        contains[v[i][2]] = ms.order_of_key(v[i][1] + 1);
        ms.insert(v[i][1]);
    }
    for (int i = 1; i <= n; i++) {
        cout << contains[i] << " \n"[i == n];
    }

    ms.clear();
    vector<int> contained(n + 5);
    for (int i = 1; i <= n; i++) {
        contained[v[i][2]] = ms.size() - ms.order_of_key(v[i][1]);
        ms.insert(v[i][1]);
    }
    for (int i = 1; i <= n; i++) {
        cout << contained[i] << " \n"[i == n];
    }
    return 0;
}

