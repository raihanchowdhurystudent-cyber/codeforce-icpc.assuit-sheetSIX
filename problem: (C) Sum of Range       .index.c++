#include <bits/stdc++.h>
using namespace std;
long long total(long long n){ return n<=0 ? 0 : n*(n+1)/2; }
long long even(long long n){ long long k=n/2; return k*(k+1); }
long long odd(long long n){ long long k=(n+1)/2; return k*k; }
int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    long long a,b; cin>>a>>b;
    if(a>b) swap(a,b);
    cout << total(b)-total(a-1) << "\n";
    cout << even(b)-even(a-1) << "\n";
    cout << odd(b)-odd(a-1) << "\n";
    return 0;
}
