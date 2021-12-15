#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll comb(ll n){
    if (n<2) return 0;
    if (n==2) return 1;
    ll c = n*(n-1)/2;
    return c;
}
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    freopen("COUNTPAIRS.INP", "r", stdin);
    freopen("COUNTPAIRS.OUT", "w", stdout);
    ll n, even=0, odd=0; cin >> n;
    ll a[n];
    for (int i=0;i<n;i++){
        cin >> a[i];
        if (a[i]%2==0) even++;
        else odd++;
    }
    cout << comb(even) + comb(odd);
    return 0;
}
