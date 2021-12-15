#include <bits/stdc++.h>
#define ll long long
using namespace std;
vector<int> divv(1e6+5, 0);
int solve(int n){
    if (n==1) return 1;
    if (n==2) return 2;
    int uoc=2;
    for (int i=2;i<=sqrt(n);i++){
        if (n%i==0){
            if (i*i==n) uoc++;
            else uoc+=2;
        }
    }
    return uoc;
}
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    freopen("DIV.INP", "r", stdin);
    freopen("DIV.OUT", "w", stdout);
    int n;
    while (cin >> n){
        if (divv[n]==0){
            int t = solve(n);
            divv[n] = t;
            cout << t << endl;
        }
        else cout << divv[n] << endl;
    }
    return 0;
}
/*

*/
