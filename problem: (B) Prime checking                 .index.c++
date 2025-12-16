#include <bits/stdc++.h>
using namespace std;
bool isPrime(long long n) {
    if (n <= 1) return false; 
    if (n == 2) return true;
    if (n % 2 == 0) return false;
    long long limit = (long long)sqrt(n);
    for (long long i = 3; i <= limit; i += 2) {
        if (n % i == 0) {
            return false;
        }
    }
    return true;
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long N;
    if (!(cin >> N)) {
        return 0;
    }
    if (isPrime(N)) {
        cout << "YES\n";
    } else {
        cout << "NO\n";
    }
    return 0;
}
