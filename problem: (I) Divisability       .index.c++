#include<iostream>
#include<algorithm>
#include<iomanip>
#include<string>
#include<cmath>
using namespace std;
long long sum (long long n)
{
    return n*(n+1)/2;
}
int main()
{
    long long n1,n2,div;
    cin >> n1 >> n2 >> div;
    long long max_ = max(n1,n2);
    long long min_ = min(n1,n2);
    long long result = (sum(max_/div)*div) - (sum((min_-1)/div)*div);
    cout << result << endl;
}
