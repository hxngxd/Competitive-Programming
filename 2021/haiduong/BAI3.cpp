#include <bits/stdc++.h>
using namespace std;
int main(){
    freopen("BAI3.INP", "r", stdin);
    freopen("BAI3.OUT", "w", stdout);
    map<int, int> mp;
    map<int, int> vt;
    int h, k=0, v=0, i=0;
    while (1){
        cin >> h;
        if (h==0) break;
        mp[h]++;
        if (mp[h]==1) vt[h]=i;
        if (mp[h]>=v && vt[h] >= vt[k]){
            v = mp[h];
            k = h;
        }
        i++;
    }
    cout << k << " " << v;
    return 0;
}

