#include <bits/stdc++.h>
#define ll unsigned long long
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    ll L, R, M;
    cin >> L >> R;
    M = (L*(L-1) + R*(R+1))/2;
    M = floor(sqrt(M));
    cout << M;
    return 0;
}
