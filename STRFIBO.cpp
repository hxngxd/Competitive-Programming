#include <bits/stdc++.h>
using namespace std;
void solve(int n){
    int a[n+1][2];
    int Fn_size = 0;
    for (int i=0;i<n;i++){
        cin >> a[i][0] >> a[i][1];
        Fn_size = max(Fn_size, a[i][0]);
    }
    string fib[Fn_size+1];
    fib[0] = "a";
    fib[1] = "b";
    for (int i=2;i<=Fn_size;i++){
        fib[i] = fib[i-2] + fib[i-1];
        cout << fib[i] << endl << endl;
    }
    for (int i=0;i<n;i++){
        cout << fib[a[i][0]][a[i][1]-1] << endl;
    }

}
int main(){
//    freopen("STRFIBO.INP", "r", stdin);
//    freopen("STRFIBO.OUT", "w", stdout);
    int n; cin >> n;
    solve(n);
    return 0;
}
