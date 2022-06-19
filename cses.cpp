/*Nguyen Tuong Hung*/
#include <bits/stdc++.h>
#define ll long long
#define pb push_back
#define key first
#define val second
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    ll n, s; cin >> n >> s;
    ll w[n], c[n];
    for (int i=0;i<n;i++) cin >> w[i];
    for (int i=0;i<n;i++) cin >> c[i];
    ll ans = 0, t1 = 0, t2 = 0;
    ll l = 0;
    for (int r=0;r<n;r++){
        t1 += w[r];
        t2 += c[r];
        while (t1 > s){
            t1 -= w[l];
            t2 -= c[l];
            l++;
        }
        ans = max(ans, t2);
    }
    cout << t2;
    return 0;
}
