#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    freopen("ANALYSE.INP", "r", stdin);
    freopen("ANALYSE.OUT", "w", stdout);
    const int mx = 1000;
    int n; cin >> n;
    vector<bool> prime(mx, true);
    prime[0] = false; prime[1] = false;
    for (int i=2;i<=sqrt(mx);i++){
        if (prime[i]){
            for (int j=i+i;j<=mx;j+=i){
                prime[j] = false;
            }
        }
    }
    map<int, int> mp;
    for (int i=2;i<=n;i++){
        int k = 2, t = 0, p = i;
        if (prime[p]){
            mp[p]++;
            continue;
        }
        while (p!=1){
            if (p%k==0){
                p/=k;
                t++;
            }
            else{
                if (t!=0) mp[k]+=t;
                k++;
                t = 0;
            }
        }
        mp[k]+=t;
    }
    for (auto i : mp){
        cout << i.second << " ";
    }
    return 0;
}
