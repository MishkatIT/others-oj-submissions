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
    // Your cpp code 
  
    int t;
    cin >> t;
    while (t--) {
        long long n;
        cin >> n;
        bool ok = true;
        for (long long i = 2; i * i <= n; i++) {
            if (n % i == 0) {
                ok = false;
                break;
            }
        }
        cout << n;
        if (ok) {
            cout << " is a prime" << '\n';
            continue;
        }
        cout << " is not a prime" << '\n';
    }
    return 0;
}
