#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    freopen("RGAME.INP", "r", stdin);
    freopen("RGAME.OUT", "w", stdout);
    int n; cin >> n;
    int d[n+1];
    map<int, int, greater<int>> mp;
    bool exist = false;
    for (int i=0;i<n;i++){
        cin >> d[i];
        mp[d[i]]++;
        if (mp[d[i]] > 1) exist = true;
    }
    if (exist==false || n<4){
        cout << -1;
        return 0;
    }
    int cr=-1, cd=-1;
    long long S = 1;
    for (auto i=mp.begin();i!=mp.end();i++){
        if (i->second >=4){
            S = i->first * i->first;
            cout << S;
            return 0;
        }
        else if (i->second > 1 && i->second < 4){
            cd = i->first;
            i++;
            for (auto j=i;j!=mp.end();j++){
                if (j->second >= 2){
                    cr = j->first;
                    break;
                }
            }
            break;
        }
    }
    if (cr != -1 && cd != -1){
        S = cr * cd;
        cout << S;
    }
    else cout << -1;
    return 0;
}
