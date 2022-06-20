#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll tiennuoc(ll A){
    ll tien = 0;
    if (A<=5) return 8000*A;
    tien += 8000*5;
    if (A<=10) return tien + 10000*(A-5);
    tien += 10000*5;
    if (A<=15) return tien + 14000*(A-10);
    tien += 14000*5;
    if (A<=20) return tien + 20000*(A-15);
    tien += 20000*5 + 30000*(A-20);
    return tien;
}
int main(){
    freopen("BAI1.INP", "r", stdin);
    freopen("BAI1.OUT", "w", stdout);
    ll A; cin >> A;
    ll tien = tiennuoc(A);
    cout << tien + tien/10;
    return 0;
}
