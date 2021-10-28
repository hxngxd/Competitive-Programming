#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll demuoc(ll n){
    ll uoc = 2;
    for (ll i=2;i<=sqrt(n);i++){
        if (n%i==0){
            if (i*i==n){
                uoc++;
            }
            else{
                uoc+=2;
            }
        }
    }
    return uoc;
}
int main(){
    freopen("UOCSO.INP", "r", stdin);
    freopen("UOCSO.OUT", "w", stdout);
    int q;
    cin >> q;
    map<ll, ll> mp;
    map<ll, ll>::iterator it;
    ll a[q+1], b[q+1];
    for (int i=0;i<q;i++){
        cin >> a[i] >> b[i];
    }
    ll n, uoc;
    for (int i=0;i<q;i++){
        n = a[i]*b[i];
        it = mp.find(n);
        if (it==mp.end()){
            uoc = demuoc(n);
            cout << uoc << endl;
            mp[n] = uoc;
        }
        else{
            cout << it->second << endl;
        }
    }
    return 0;
}
