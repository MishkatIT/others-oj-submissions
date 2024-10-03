/*
    Author    : MishkatIT
    Created   : Thursday 26-09-2024 19:47:54
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

void func(int* a, int* b) {
    *a += *b;
    *b = abs(*a - (2 * *b));
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int a, b;
    cin >> a >> b;
    func(&a, &b);
    cout << a << '\n';
    cout << b << '\n';
    return 0;
}