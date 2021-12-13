#include <bits/stdc++.h>
#define ll long long
using namespace std;
int L, R, h;
int ok(int n){
    int s = 0;
    while (n!=0){
        s+=n%10;
        n/=10;
    }
    return s;
}
void solve(){
    L = 1, R= 150, h = 10;
    int cnt = 0;
    for (int i=L;i<=R;i++){
        cout << i << " " << ok(i) << endl;
    }
}
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
//    freopen("input.INP", "r", stdin);
//    freopen("output.OUT", "w", stdout);
    solve();
    return 0;
}
