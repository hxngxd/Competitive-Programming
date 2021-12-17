#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    freopen("DIFF.INP", "r", stdin);
    freopen("DIFF.OUT", "w", stdout);
    int n; cin >> n;
    int x[n], y[n];
    map<int, vector<pair<int, int>>> mp;
    int most = 0;
    for (int i=0;i<n;i++){
        cin >> x[i] >> y[i];
        mp[abs(x[i]-y[i])].push_back(make_pair(x[i], y[i]));
        most = max(most, (int)mp[abs(x[i]-y[i])].size());
    }
    for (auto i : mp){
        if ((int)i.second.size()==most){
            cout << i.first << endl;
            for (auto j : i.second){
                cout << j.first << " " << j.second << endl;
            }
            break;
        }
    }
    return 0;
}
