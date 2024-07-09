#include<bits/stdc++.h>
#define fio ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define debug(_) cout << #_ << " is " << _ << '\n';
using namespace std;

using ll = long long;
using ld = long double;

const ll mod = 1e9 + 7;
const ll N = 1e5 + 10;
const ll inf = 1e9;
const ll linf = 1e18;

int euler_totient(int n)
{
    int ans = n; // Initialize the answer as n.

    // Loop through all numbers from 2 to the square root of n.
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) { // Check if i is a divisor of n.
            while (n % i == 0) {
                n /= i; // Divide n by i until it's no longer divisible by i.
            }
            ans -= ans / i;
            // Update ans using Euler's Totient Function formula:
//   - ans represents the count of positive integers less than or equal to n that are coprime (relatively prime) to n.
//   - Inside the for loop, we iterate through potential divisors 'i' of n.
//   - When we find a divisor 'i' (i.e., n % i == 0), it means that 'i' is a prime factor of 'n'.
//   - To calculate the count of numbers coprime to 'n', we need to exclude the numbers that share a common factor with 'n'.
//   - 'ans / i' calculates the count of numbers less than or equal to 'n' that are divisible by 'i', and thus share a common factor with 'n'.
//   - Subtracting 'ans / i' from 'ans' effectively removes these numbers from the count, leaving us with the count of coprime numbers.

        }
    }

    if (n > 1) {
        ans -= ans / n; // If n is still greater than 1, update ans using Euler's Totient Function formula.
        // Subtract ans / n to remove numbers divisible by the last remaining prime factor of n.
    }

    return ans; 
}

int main()
{
    fio; // Fast I/O optimization.
    int n;
    cin >> n; 

    // Solve it by using Euler's Totient Function and print the result.
    cout << euler_totient(n);

    return 0;
}