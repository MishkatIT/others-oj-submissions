/*
    Author    : MishkatIT
    Created   : Saturday 28-09-2024 14:56:00
*/

#include <bits/stdc++.h>
using namespace std;

#ifdef LOCAL
#include "algo/debug.h"
#else
#define debug(...) 42
#endif

using ll = long long;
using ld = long double;
const int mod = 1e9 + 7;
const int N = 2e5 + 10;
const int inf = 1e9;
const ll linf = 1e18;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    vector<int> v(n);
    for (auto& i : v) {
        cin >> i;
    }
    int k;
    cin >> k;
    sort(v.begin(), v.end());


    while (k--) {
        int l, r;
        cin >> l >> r;
        int x = lower_bound(v.begin(), v.end(), l) - v.begin();
        int y = upper_bound(v.begin(), v.end(), r) - v.begin() - 1;
        cout << y - x + 1 << ' ';
    }

    return 0;
}


/*
    
    Author    : MishkatIT
    Created   : Saturday 28-09-2024 14:56:00


#include <bits/stdc++.h>
using namespace std;

#ifdef LOCAL
#include "algo/debug.h"
#else
#define debug(...) 42
#endif

using ll = long long;
using ld = long double;
const int mod = 1e9 + 7;
const int N = 2e5 + 10;
const int inf = 1e9;
const ll linf = 1e18;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    vector<int> v(n);
    for (auto& i : v) {
        cin >> i;
    }
    int k;
    cin >> k;
    sort(v.begin(), v.end());


    while (k--) {
        int l, r;
        cin >> l >> r;

        int x = n, y = -1;
        int low = 0, high = n - 1;
        while (low <= high) {
            int mid = low + (high - low) / 2;
            if (v[mid] >= l) {
                x = mid;
                high = mid - 1;
            } else {
                low = mid + 1;
            }
        }

        low = 0, high = n - 1;
        while (low <= high) {
            int mid = low + (high - low) / 2;
            if (v[mid] <= r) {
                y = mid;
                low = mid + 1;
            } else {
                high = mid - 1;
            }
        }
        // debug(x), debug(y);
        if (x <= y) {
            cout << y - x + 1 << ' ';
        } else {
            cout << 0 << ' ';
        }
    }

    return 0;
} rawwwwww
*/
