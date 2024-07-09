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
        char c;
        cin >> c;
        if (c >= 'A' && c <= 'Z') {
            cout << "Uppercase Character" << '\n';
        } else if (c >= 'a' && c <= 'z') {
            cout << "Lowercase Character" << '\n';
        } else if (c >= '0' && c <= '9') {
            cout << "Numerical Digit" << '\n';
        } else {
            cout << "Special Characters" << '\n';
        }
    }
    return 0;
}
