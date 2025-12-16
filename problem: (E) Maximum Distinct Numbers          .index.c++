#include <bits/stdc++.h>
using namespace std;
const long long MAX_K_POSSIBLE = 2000000000LL;
long long sum_of_first_k(long long k) {
    return k * (k + 1) / 2;
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long N;
    if (!(cin >> N)) {
        return 0;
    }
    long long low = 1;            
    long long high = MAX_K_POSSIBLE; 
    long long max_k = 0;
    while (low <= high) {
        long long mid = low + (high - low) / 2;
        long long current_sum = sum_of_first_k(mid);
        if (current_sum <= N) {
            max_k = mid;
            low = mid + 1; 
        } else {
            high = mid - 1; 
        }
    }
    cout << max_k << "\n";
    return 0;
}
