#include <bits/stdc++.h>
using namespace std;
int countp(int n){
    if (n<=2) return 0;
    if (n==3) return 1;
    if (n%2==0) return (pow(n, 2)-2*n)/4;
    else return pow((int)n/2, 2);
}
int main(){
    freopen("COUNTPAIRS.INP", "r", stdin);
    freopen("COUNTPAIRS.OUT", "w", stdout);
    int T; cin >> T;
    int n;
    for (int i=0;i<T;i++){
        cin >> n;
        cout << countp(n) << endl;
    }
    return 0;
}
