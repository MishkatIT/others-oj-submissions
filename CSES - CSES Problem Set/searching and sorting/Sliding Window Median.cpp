/*
    author    : MishkatIT
    created   : Monday 2024-02-26-20.29.49
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

#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;


// Ordered Multiset (Ascending Order)
template <typename T>
using ordered_multiset = tree<T, null_type, less_equal<T>, rb_tree_tag, tree_order_statistics_node_update>;


int main()
{
    fio;
    int n, k;
    cin >> n >> k;
    vector<int> v(n);
    for (auto& i : v) cin >> i;

    ordered_multiset<int> ms;
    k--;
    for (int i = 0; i < n; i++) {
        ms.insert(v[i]);
        if (i >= k) {
            cout << *ms.find_by_order(k / 2) << ' ';
            ms.erase(ms.find_by_order(ms.order_of_key(v[i - k])));
        }
    }
    return 0;
}




