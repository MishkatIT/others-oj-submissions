// /*
//     Author    : MishkatIT
//     Created   : Thursday 26-09-2024 16:13:13
// */

// #include <bits/stdc++.h>
// using namespace std;

// #ifdef LOCAL
// #include "algo/debug.h"
// #else
// #define debug(...) 42
// #endif

// using ll = long long;
// using ld = long double;
// const int mod = 1e9 + 7;
// const int N = 2e5 + 10;
// const int inf = 1e9;
// const ll linf = 1e18;

// int main() {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);

//     int tc;
//     cin >> tc;
//     while (tc--) {
//         int n;
//         cin >> n;
//         bool ok = true;
//         for (int x = 0; x < n; x++) {
//             for (int i = 0; i < 5; i++) {
//             int a, b, c;
//             cin >> a >> b >> c;
//             if (i <= 2) {
//                 if (a != 2 * n) ok = false;
//             }
//             if (i == 3) {
//                 if (a != n) ok = false;
//             }
//             if ( i == 4) {
//                 if (a !=3* n) ok = false;
//             }
//             if (b != 3) ok = false;
//             if (c != 10) ok = false;
//         }
//         }
//         cout << (ok ? "Consistent" : "Inconsistent") << '\n';
//     }
//     return 0;
// } 
WA