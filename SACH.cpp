#include <bits/stdc++.h>
using namespace std;
int main(){
    freopen("SACH.INP", "r", stdin);
    freopen("SACH.OUT", "w", stdout);
    int n; cin >> n;
    int a[n+1];
    map<int, int> mp;
    int x, y=0;
    for (int i=0;i<n;i++){
        cin >> a[i];
        int t = ++mp[a[i]];
        if (t>y){
            y = t;
            x = a[i];
        }
    }
    cout << x << " " << y;
    return 0;
}
