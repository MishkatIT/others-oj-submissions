/*
    author    : MishkatIT
    created   : Sunday 2024-02-25-16.10.15
*/

#include<bits/stdc++.h>
#define fio ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define debug(_) cout << #_ << " is " << _ << '\n';
using namespace std;
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;

// Ordered Set (Ascending Order)
template <typename T>
using ordered_set = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;

using ll        = long long;
using ld        = long double;
const ll mod    = 1e9 + 7;
const ll N      = 2e5 + 10;
const ll inf    = 1e9;
const ll linf   = 1e18;

int main()
{
    fio;
    int n, k;
    cin >> n >> k;
    ordered_set<int> os;
    for (int i = 0; i < n; i++) {
        os.insert(i + 1);
    }
    int curPos = 0, cnt = n;
    for (int i = 1; i <= n; i++) {
        curPos += k;
        curPos %= cnt;
        auto nth = os.find_by_order(curPos);
        cout << *nth << ' ';
        os.erase(nth);
        cnt--;
    }
    return 0;
}


