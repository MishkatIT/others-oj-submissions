 /*
     Author    : MishkatIT
     Created   : Wednesday 24-04-2024 20:30:06
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
 const ll mod = 1e9 + 7;
 const ll N = 2e5 + 10;
 const ll inf = 1e9;
 const ll linf = 1e18;
 
 int main() {
     ios_base::sync_with_stdio(false);
     cin.tie(NULL);
 
     int tc;
     cin >> tc;
     while (tc--) {
         int n, x, y;
         cin >> n >> x >> y;

         vector<int> v(n);
         for (auto& i : v) {
             cin >> i;
         }
         ll ans = 0;
         for (int i = 0; i < n; i++) {
            ans += min(v[i] * x, y);
         }
         cout << ans << '\n';
     }
     return 0;
 }
