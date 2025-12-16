#include <bits/stdc++.h>
using namespace std;
int a[105][105],b[105][105],c[105][105];
int main(){
    ios_base::sync_with_stdio(false);cin.tie(NULL);
    int r1,c1,r2,c2; cin>>r1>>c1;
    for(int i=0;i<r1;i++)for(int j=0;j<c1;j++)cin>>a[i][j];
    cin>>r2>>c2;
    for(int i=0;i<r2;i++)for(int j=0;j<c2;j++)cin>>b[i][j];
    for(int i=0;i<r1;i++)
        for(int j=0;j<c2;j++){
            long long s=0;
            for(int k=0;k<c1;k++) s += 1LL*a[i][k]*b[k][j];
            c[i][j]=s;
        }
    for(int i=0;i<r1;i++){
        for(int j=0;j<c2;j++)
            cout<<c[i][j]<<(j<c2-1?" ":"\n");
    }
    return 0;
}
