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
        string str;
        cin >> str;
        cout << "Sum = ";
        cout << (str.front() - '0' + str.back() - '0') << '\n';
    }
    return 0;
}
