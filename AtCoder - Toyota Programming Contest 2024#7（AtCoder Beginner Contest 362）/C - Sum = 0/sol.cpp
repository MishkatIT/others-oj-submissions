/*
    Author    : MishkatIT
    Created   : Wednesday 17-07-2024 22:44:15
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

// void modifyValue(int* ptr) {
//     *ptr = 20; // modifies the value pointed to by ptr
// }

// int main() {
//     int x = 10;
//     int* p = &x;
//     modifyValue(p);
//     cout << x << '\n'; // Output will be 20
//     return 0;
// }

void modifyPointer(int* ptr) {
    
    static int y = 30;
    ptr = &y; // changes the pointer to point to a different address
    cout << *ptr << '\n';
}

int main() {
    int x = 10;
    int* p = &x;
    modifyPointer(p);
    cout << *p << '\n'; // Output will be 30
    return 0;
}
