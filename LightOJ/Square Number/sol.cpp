#include <bits/stdc++.h>
using namespace std;

// Reads two integers and prints their sum
void basicIO() {
    int a, b;
    cin >> a >> b;
    cout << a + b << endl;
}

int main() {
    // basicIO();
    // Your cpp code here
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        bool ok = false;
        for (long long i = 0; i * i <= n; i++) {
            if (i * i == n) {
                ok = true;
                break;
            }
        }
        cout << (ok ? "YES" : "NO") << '\n';
    }
    return 0;
}
