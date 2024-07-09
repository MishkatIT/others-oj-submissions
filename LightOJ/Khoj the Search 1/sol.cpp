#include <bits/stdc++.h>
using namespace std;

void basicIO() {
    int a, b;
    cin >> a >> b;
    cout << a + b << endl;
}

int main() {
    // basicIO();
    int t;
    cin >> t;
    while (t--) {
        string a, b;
        cin >> a >> b;
        cout << a.find(b) << '\n';
    }
    return 0;
}
