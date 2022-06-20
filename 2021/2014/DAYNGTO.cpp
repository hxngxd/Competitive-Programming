#include <bits/stdc++.h>
#define ll long long
using namespace std;
int n;
ll a[10005];
bool ok(int n){
    if (n<2) return false;
    else if (n<4) return true;
    for (int i=2;i<=sqrt(n);i++){
        if (n%i==0) return false;
    }
    return true;
}
void solve(){
    cin >> n;
    map<int, bool> mp;
    int cnt = 0, mx = 0, id = -1;
    for (int i=0;i<n;i++){
        cin >> a[i];
        if (mp.find(a[i])==mp.end()){
            bool nt = ok(a[i]);
            mp[a[i]]=nt;
            if (nt){
                cnt++;
                if (a[i] > mx){
                    mx = a[i];
                    id = i;
                }
            }
        }
        else{
            if (mp[a[i]]){
                cnt++;
                if (a[i] > mx){
                    mx = a[i];
                    id = i;
                }
            }
        }
    }
    if (cnt!=0) cout << cnt << " " << mx << " " << id+1;
    else cout << "khong co";
}
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    freopen("input.INP", "r", stdin);
//    freopen("output.OUT", "w", stdout);
    solve();
    return 0;
}
