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
        int cnt = 0;
        while (n) {
            cnt += (n / 5);
            n /= 5;
        }
        cout << cnt << '\n';
    }
    return 0;
}
