#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    freopen("SUM.INP", "r", stdin);
    freopen("SUM.INP", "w", stdout);
    int n; cin >> n;
    int k = 9;
    int sum = 0;
    while (k<n){
        sum += k;
        k+=9;
    }
    cout << sum;
    return 0;
}
