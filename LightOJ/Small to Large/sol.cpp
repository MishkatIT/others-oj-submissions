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
    int cs = 0;
    while (t--) {
        int a, b, c;
        cin >> a >> b >> c;
        if (a > b) {
            swap(a, b);
        }
        if (a > c) {
            swap(a, c);
        }
        if (b > c) {
            swap(b, c);
        }
        cout << "Case " << ++cs << ": " << a << ' ' << b << ' ' << c << '\n';
    }
    return 0;
}
