#include <iostream>
#include <cmath>
#include <algorithm>

using namespace std;

void solve() {
    long long N;
    cin >> N;

    long long sum_of_divisors = 1;

    long long temp_N = N;

    for (long long i = 2; i * i <= temp_N; ++i) {
        if (temp_N % i == 0) {
            long long p = i;
            long long count = 0;

            while (temp_N % p == 0) {
                temp_N /= p;
                count++;
            }

            long long term_sum = 1;
            long long p_power = p;

            for (int k = 1; k <= count; ++k) {
                term_sum += p_power;
                
                if (k < count) {
                    p_power *= p;
                }
            }
            
            sum_of_divisors *= term_sum;
        }
    }

    if (temp_N > 1) {
        sum_of_divisors *= (temp_N + 1);
    }

    cout << sum_of_divisors << "\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solve();

    return 0;
}
