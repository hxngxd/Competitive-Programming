#include <bits/stdc++.h>
#define ll long long
using namespace std;
int n;
ll S;
ll sub(){
    cin >> n >> S;
    ll a[n+1];
    vector<ll> prefix(n, 0);
    ll cnt = 0;
    for (int i=0;i<n;i++){
        cin >> a[i];
        if (i==0){
            prefix[i] = a[i];
        }
        else {
            prefix[i] = prefix[i-1] + a[i];
            for (int j=0;j<i;j++){
                ll abssum = abs(prefix[i]-prefix[j]);
                if (abssum>S) cnt++;
            }
        }
        if (abs(prefix[i]) > S) cnt++;
    }
    return cnt;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    freopen("SUBSEQ.INP", "r", stdin);
    freopen("SUBSEQ.OUT", "w", stdout);
    cout << sub();
    return 0;
}
