#include <bits/stdc++.h>
using namespace std;

// Reads two integers and prints their sum
void basicIO() {
    int a, b;
    cin >> a >> b;
    cout << a + b << endl;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> v(n);
        for (auto& i : v) cin >> i;
        for (int i = 0; i < n; i += 2) {
            cout << v[i] << ' ';
        }
        cout << '\n';
    }
    return 0;
}
