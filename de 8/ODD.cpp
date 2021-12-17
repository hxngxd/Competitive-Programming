#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    freopen("ODD.INP", "r", stdin);
    freopen("ODD.OUT", "w", stdout);
    int n; cin >> n;
    int a[n];
    map<int, int> mp;
    for (int i=0;i<n;i++){
        cin >> a[i];
        mp[a[i]]++;
    }
    for (auto i : mp){
        if (i.second%2!=0) cout << i.first;
    }
    return 0;
}
