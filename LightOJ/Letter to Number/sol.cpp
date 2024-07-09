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
    while (t--) {
        string str;
        cin >> str;
        for (auto& i : str) {
            cout << (i - 'A' + 1);
        }
        cout << '\n';
    }
    return 0;
}
