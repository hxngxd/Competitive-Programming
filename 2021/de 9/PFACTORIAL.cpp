#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
//    freopen("PFACTORIAL.INP", "r", stdin);
//    freopen("PFACTORIAL.OUT", "w", stdout);
    ll n; cin >> n;
    map<ll, ll> mp;
    ll k = 2;
    while (n!=1){
        if (n%k==0){
            n/=k;
            mp[k]++;
        }
        else{
            if (k>sqrt(n)){
                mp[n]=1;
                break;
            }
            k++;
        }
    }
    cout << mp.size() << endl;
    for (auto i : mp){
        cout << i.first << " " << i.second << endl;
    }
    return 0;
}
