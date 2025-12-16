#include<bits/stdc++.h>
using namespace std;

int main() {
    double A, B, C;
    
    if (!(cin >> A >> B >> C)) {
        return 1;
    }

    if (A + B > C && A + C > B && B + C > A) {
        cout << "Valid" << endl;
        
        double s = (A + B + C) / 2.0;
        
        double area = sqrt(s * (s - A) * (s - B) * (s - C));
        
        cout << area << endl;
    } else {
        cout << "Invalid" << endl;
    }

    return 0;
}
