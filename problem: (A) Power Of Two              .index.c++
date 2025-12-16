#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long N;
    if (!(cin >> N)) {
        return 0;
    }
    if ((N & (N - 1)) == 0) {
        cout << "YES\n";
    } else {
        cout << "NO\n";
    }
    return 0;
}
