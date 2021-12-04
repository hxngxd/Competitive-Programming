#include <bits/stdc++.h>
#define ll long long
using namespace std;
int vnum(int n){
    int tong = 1;
    for (int i=2;i<=sqrt(n);i++){
        if (n%i==0){
            if (i*i==n) tong += i;
            else {
                tong += i + n/i;
            }
        }
    }
    return tong;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    freopen("VNUMBER.INP", "r", stdin);
    freopen("VNUMBER.OUT", "w", stdout);
    int l, r;
    cin >> l >> r;
    if (r < 12){
        cout << 0;
        return 0;
    }
    if (l<12) l=12;
    int vnums = 0;
    for (int i=l;i<=r;i++){
        if (vnum(i) > i){
            vnums++;
        }
    }
    cout << vnums;
    return 0;
}
