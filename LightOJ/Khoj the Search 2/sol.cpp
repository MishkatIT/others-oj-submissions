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
        string a, b;
        cin >> a >> b;
        auto it = a.find(b);
        int cnt = 0;
        while(it != string::npos) {
            cnt++;
            it = a.find (b, it + 1);
        }
        cout << cnt << '\n';
    }
    return 0;
}
