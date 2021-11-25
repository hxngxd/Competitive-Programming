#include <bits/stdc++.h>
using namespace std;
int solve(int n){
    if (n==1) return 1;
    if (n==2) return 4;
    if (n==3) return 5;
    double lg=log10(720);
    int k = 7, dg = floor(lg)+1;
    while (true){
        lg += log10(k);
        dg = floor(lg)+1;
        if (dg > n) return -1;
        if (dg == n) return k;
        k++;
    }
}
int main(){
    freopen("FACTORIAL.INP", "r", stdin);
    freopen("FACTORIAL.OUT", "w", stdout);
    int n; cin >> n;
    cout << solve(n);
    return 0;
}
