#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    freopen("FREQUENCY.INP", "r", stdin);
    freopen("FREQUENCY.OUT", "w", stdout);
    int n; cin >> n;
    int a[n];
    map<int,int> mp;
    int most = 0;
    for (int i=0;i<n;i++){
        cin >> a[i];
        int t = ++mp[a[i]];
        most=max(most,t);
    }
    for (auto i : mp){
        if (i.second==most){
            cout << i.first << endl << most;
            break;
        }
    }
    return 0;
}
