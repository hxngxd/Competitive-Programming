#include <bits/stdc++.h>
#include <string>
using namespace std;
bool snt(int n){
    if (n<2) return false;
    else if (n<4) return true;
    for (int i=2;i<=sqrt(n);i++){
        if (n%i==0) return false;
    }
    return true;
}
void solve(int n){
    int d = floor(log10(n)), tr = 0;
    tr += snt(n);
    string arr = to_string(n) + " ";
    for (int i=1;i<=d;i++){
        int fdg = n / pow(10, d);
        n = (n - fdg*pow(10, d))*10 + fdg;
        arr += to_string(n) + " ";
        if (tr!=0) tr += snt(n);
    }
    cout << ((tr==d+1) ? "True" : "False") << endl;
    cout << arr;
}
int main(){
    freopen("RPRIMES.INP", "r", stdin);
    freopen("RPRIMES.OUT", "w", stdout);
    int n; cin >> n;
    solve(n);
    return 0;
}
